/*
 * max7219.c
 *
 *  Created on: 02.12.2017
 *      Author: rafal
 */

#include <string.h>
#include "main.h"
#include "stm32f1xx_hal.h"
#include "rtc.h"
#include "gpio.h"

#include "common.h"
#include "STM32_PINS.h"

#include "../SPI/SPI.h"
#include "max7219.h"
#include "max7219_font.h"



MAX MAX7219;

//0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,
//0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,
//0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,
//0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80

void _delay_us_1(uint32_t _us)
{
	uint32_t temp = _us;
	while(temp--)
	{
		for(uint32_t i = 0; i<14;i++) asm("nop");
	}
}

void _delay_ms_1(uint32_t _ms)
{
	uint32_t temp = _ms;
	while(temp--)
	{
		_delay_us_1(1000);
	}
}



void MAX7219_sendData(uint8_t reg, uint8_t data )
{
	SPI_CS(CS_LO);
	for(uint8_t i = 0; i < 4; i++)
	{
		SPI_putD(reg);
		SPI_putD(data);
	}
	SPI_CS(CS_HI);

}

void MAX7219_sendRamBuff (uint8_t * buff)
{

	for(uint8_t i = 0; i < 8; i++)
	{

		SPI_CS(CS_LO);

		for(uint8_t j = 0; j < 4; j++)
		{
			SPI_putD((i%8)+1);
			SPI_putD(buff[((3-j)*8)+i]);
		}

		SPI_CS(CS_HI);
	}

}


void MAX7219_INIT (void)
{

	MAX7219_sendData(MAX7219_SHUT_DWN, SHUT_DOWN_MODE);
	MAX7219_sendData(MAX7219_SHUT_DWN, NORMAL_OPERATION);
	MAX7219_sendData(MAX7219_DEC_MODE, NO_DECODE);
	MAX7219_sendData(MAX7219_INTENSITY, 0x01);
	MAX7219_sendData(MAX7219_SCN_LIMIT, MAX_0_7);
	MAX7219_sendData(MAX7219_DIG0,0x00);
	MAX7219_sendData(MAX7219_DIG1,0x00);
	MAX7219_sendData(MAX7219_DIG2,0x00);
	MAX7219_sendData(MAX7219_DIG3,0x00);
	MAX7219_sendData(MAX7219_DIG4,0x00);
	MAX7219_sendData(MAX7219_DIG5,0x00);
	MAX7219_sendData(MAX7219_DIG6,0x00);
	MAX7219_sendData(MAX7219_DIG7,0x00);
	for(uint8_t i = 0; i < 1; i++)
	{
		MAX7219_sendData(MAX7219_DISPL_TST, 0x01);
		_delay_ms_1(100);
		MAX7219_sendData(MAX7219_DISPL_TST, 0x00);
		_delay_ms_1(100);
	}



}

void MAX7219_setPixel (int x, int y)
{
	if( (x>31) || (x<0) || (y>7) || (y<0)) return;
	MAX7219.RAM_BUFFER[((x / 8) * 8)+y] |= (1<<((x%8)));
}

void MAX7219_sendChar (char data, int x )
{
	if(x > 31) return;
	uint8_t temp_idx = 0;
	uint8_t line = 0;

	if((data>='0') && (data<='9') )
	{
		temp_idx = data - '0';

		for(uint8_t i = 0; i < 8; i++)
		{
			 line = DIGITS[temp_idx][i];

			 for(int j = 0; j< 8; j++)
			 {

					 if(line & 0x80) MAX7219_setPixel(31-(x+j),i);
					 line <<= 1;

			 }
		}

	}
	else if((data>='A') && (data<='Z'))
	{
		temp_idx = data - 'A';

		for(uint8_t i = 0; i < 8; i++)
		{
			line =  LETTERS[temp_idx][i];

			for(int j = 0; j< 8; j++)
			{

					if(line & 0x80) MAX7219_setPixel(31-(x+j),i);
					line <<= 1;


			}
		}

	}
	else if((data>='a') && (data<='z'))
		{
			temp_idx = (uint8_t)(data + ('Z' - 'A') - 'a' + 2);

			for(uint8_t i = 0; i < 8; i++)
			{
				line = LETTERS[temp_idx][i];

				for(uint8_t j = 0; j < 8; j++)
				{

						if(line & 0x80) MAX7219_setPixel(31-(x+j),i);
						line <<= 1;
				}
			}

		}
	else
	{
		for(uint8_t i = 0; i < 26; i++)
		{
			if(IMAGES_LOOKUP[i][1] == data)
			{
				for(uint8_t j = 0; j < 8; j++)
				{
					line = IMAGES[IMAGES_LOOKUP[i][0]][j];
					for(int z = 0; z< 8; z++)
					{

						if( (i >= 15) && (i <= 20))
						{
							if(line & 0x01) MAX7219_setPixel(31-(x+z),j);
							line >>= 1;
						}
						else
						{
							if(line & 0x80) MAX7219_setPixel(31-(x+z),j);
							line <<= 1;
						}

					}
				}
			}
		}
	}
}

void MAX7219_scrollDisplay (void)
{


}

void MAX7219_clrDisplay (void)
{
	memset(MAX7219.RAM_BUFFER,0,32);
}

void MAX7219_sendStr (char * data, int x )
{
	int temp_idx = x;

	while(*data)
	{

		MAX7219_sendChar(*data++,temp_idx);
		if( ((*data>='0') && (*data<='9')) || ((*data>='A') && (*data<='Z')) || ((*data>='a') && (*data<='z'))) temp_idx += 7;
		else temp_idx += 5;
		if( (*data=='W')||(*data=='M') ||(*data=='N') || (*data=='D') || (*data=='O') )  temp_idx += 1;

		if(temp_idx > 31) break;
	}

}
