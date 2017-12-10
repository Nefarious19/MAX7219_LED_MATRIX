/*
 * max7219.h
 *
 *  Created on: 02.12.2017
 *      Author: rafal
 */

#ifndef MAX7219_MAX7219_H_
#define MAX7219_MAX7219_H_

//MAX7219 Registers

#define MAX7219_NO_OP 		0x00

#define MAX7219_DIG0 		0x01
#define MAX7219_DIG1 		0x02
#define MAX7219_DIG2 		0x03
#define MAX7219_DIG3 		0x04
#define MAX7219_DIG4 		0x05
#define MAX7219_DIG5 		0x06
#define MAX7219_DIG6 		0x07
#define MAX7219_DIG7 		0x08


#define MAX7219_DEC_MODE 	0x09
	#define NO_DECODE			0x00
	#define CODE_FOR_0			0x01
	#define CODE_FOR_0_3		0x0F
	#define CODE_FOR_0_7		0xFF

#define MAX7219_INTENSITY 	0x0A
	#define MAX_INTENSITY		0x0F

#define MAX7219_SCN_LIMIT 	0x0B
	#define MAX_0_0				0x00
	#define MAX_0_1				0x01
	#define MAX_0_2				0x02
	#define MAX_0_3				0x03
	#define MAX_0_4				0x04
	#define MAX_0_5				0x05
	#define MAX_0_6				0x06
	#define MAX_0_7				0x07


#define MAX7219_SHUT_DWN 	0x0C
	#define SHUT_DOWN_MODE      0x00
	#define NORMAL_OPERATION	0x01

#define MAX7219_DISPL_TST 	0x0F

typedef union
{
	uint8_t  RAM_BUFFER[32];
	uint8_t  MAX_SCROLL[4][8];
} MAX;

void MAX7219_sendData(uint8_t reg, uint8_t data);
void MAX7219_INIT (void);
void MAX7219_setPixel (int x, int y);
void MAX7219_sendChar (char data, int x );
void MAX7219_sendRamBuff (uint8_t * buff);
void MAX7219_scrollDisplay (void);
void MAX7219_clrDisplay (void);
void MAX7219_sendStr (char * data, int x );

#endif /* MAX7219_MAX7219_H_ */
