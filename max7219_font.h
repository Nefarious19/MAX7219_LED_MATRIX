/*
 * max7219_font.h
 *
 *  Created on: 04.12.2017
 *      Author: rafal
 */

#ifndef MAX7219_MAX7219_FONT_H_
#define MAX7219_MAX7219_FONT_H_

const uint8_t DIGITS[][8] = {
{
		  0b00000000,
		  0b00111100,
		  0b01100110,
		  0b01101110,
		  0b01110110,
		  0b01100110,
		  0b01100110,
		  0b00111100
		},{
  0b00000000,
  0b00011000,
  0b00011000,
  0b00111000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b01111110
},
{
  0b00000000,
  0b00111100,
  0b01100110,
  0b00000110,
  0b00001100,
  0b00110000,
  0b01100000,
  0b01111110
},
{
  0b00000000,
  0b00111100,
  0b01100110,
  0b00000110,
  0b00011100,
  0b00000110,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b00001100,
  0b00011100,
  0b00101100,
  0b01001100,
  0b01111110,
  0b00001100,
  0b00001100
},{
  0b00000000,
  0b01111110,
  0b01100000,
  0b01111100,
  0b00000110,
  0b00000110,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b01111110,
  0b01100110,
  0b00001100,
  0b00001100,
  0b00011000,
  0b00011000,
  0b00011000
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100110,
  0b00111100,
  0b01100110,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100110,
  0b00111110,
  0b00000110,
  0b01100110,
  0b00111100
}};

const uint8_t LETTERS[][8] = {
{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100110,
  0b01111110,
  0b01100110,
  0b01100110,
  0b01100110
},{
  0b00000000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01111100
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01111100
},{
  0b00000000,
  0b01111110,
  0b01100000,
  0b01100000,
  0b01111100,
  0b01100000,
  0b01100000,
  0b01111110
},{
  0b00000000,
  0b01111110,
  0b01100000,
  0b01100000,
  0b01111100,
  0b01100000,
  0b01100000,
  0b01100000
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100000,
  0b01100000,
  0b01101110,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01111110,
  0b01100110,
  0b01100110,
  0b01100110
},{
  0b00000000,
  0b00111100,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00111100
},{
  0b00000000,
  0b00011110,
  0b00001100,
  0b00001100,
  0b00001100,
  0b01101100,
  0b01101100,
  0b00111000
},{
  0b00000000,
  0b01100110,
  0b01101100,
  0b01111000,
  0b01110000,
  0b01111000,
  0b01101100,
  0b01100110
},{
  0b00000000,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01111110
},{
  0b00000000,
  0b01100011,
  0b01110111,
  0b01111111,
  0b01101011,
  0b01100011,
  0b01100011,
  0b01100011
},{
  0b00000000,
  0b01100011,
  0b01110011,
  0b01111011,
  0b01101111,
  0b01100111,
  0b01100011,
  0b01100011
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01111100,
  0b01100000,
  0b01100000
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01101110,
  0b00111100,
  0b00000110
},{
  0b00000000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01111100,
  0b01111000,
  0b01101100,
  0b01100110
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100000,
  0b00111100,
  0b00000110,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b01111110,
  0b01011010,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000
},{
  0b00000000,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00111110
},{
  0b00000000,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00111100,
  0b00011000
},{
  0b00000000,
  0b01100011,
  0b01100011,
  0b01100011,
  0b01101011,
  0b01111111,
  0b01110111,
  0b01100011
},{
  0b00000000,
  0b01100011,
  0b01100011,
  0b00110110,
  0b00011100,
  0b00110110,
  0b01100011,
  0b01100011
},{
  0b00000000,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00111100,
  0b00011000,
  0b00011000,
  0b00011000
},{
  0b00000000,
  0b01111110,
  0b00000110,
  0b00001100,
  0b00011000,
  0b00110000,
  0b01100000,
  0b01111110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b00000110,
  0b00111110,
  0b01100110,
  0b00111110
},{
  0b00000000,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01111100
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100000,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b00000110,
  0b00000110,
  0b00000110,
  0b00111110,
  0b01100110,
  0b01100110,
  0b00111110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b01100110,
  0b01111110,
  0b01100000,
  0b00111100
},{
  0b00000000,
  0b00011100,
  0b00110110,
  0b00110000,
  0b00110000,
  0b01111100,
  0b00110000,
  0b00110000
},{
  0b00000000,
  0b00000000,
  0b00111110,
  0b01100110,
  0b01100110,
  0b00111110,
  0b00000110,
  0b00111100
},{
  0b00000000,
  0b01100000,
  0b01100000,
  0b01100000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01100110
},{
  0b00000000,
  0b00000000,
  0b00011000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00111100
},{
  0b00000000,
  0b00001100,
  0b00000000,
  0b00001100,
  0b00001100,
  0b01101100,
  0b01101100,
  0b00111000
},{
  0b00000000,
  0b01100000,
  0b01100000,
  0b01100110,
  0b01101100,
  0b01111000,
  0b01101100,
  0b01100110
},{
  0b00000000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100011,
  0b01110111,
  0b01111111,
  0b01101011,
  0b01101011
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01111100,
  0b01111110,
  0b01100110,
  0b01100110,
  0b01100110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00111100
},{
  0b00000000,
  0b00000000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01111100,
  0b01100000,
  0b01100000
},{
  0b00000000,
  0b00000000,
  0b00111100,
  0b01101100,
  0b01101100,
  0b00111100,
  0b00001101,
  0b00001111
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01111100,
  0b01100110,
  0b01100110,
  0b01100000,
  0b01100000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111110,
  0b01000000,
  0b00111100,
  0b00000010,
  0b01111100
},{
  0b00000000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b01111110,
  0b00011000,
  0b00011000,
  0b00011000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00111110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100110,
  0b01100110,
  0b00111100,
  0b00011000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100011,
  0b01101011,
  0b01101011,
  0b01101011,
  0b00111110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100110,
  0b00111100,
  0b00011000,
  0b00111100,
  0b01100110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100110,
  0b01100110,
  0b00111110,
  0b00000110,
  0b00111100
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b00001100,
  0b00011000,
  0b00110000,
  0b00111100
}};


const uint8_t IMAGES[][8] = {
{
  0b00000000,
  0b00000000,
  0b00001000,
  0b00001000,
  0b00111110,
  0b00001000,
  0b00001000,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b00110110,
  0b00011100,
  0b01111111,
  0b00011100,
  0b00110110,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b00000110,
  0b00001100,
  0b00011000,
  0b00110000,
  0b01100000,
  0b00000000
},{
  0b00000000,
  0b01100000,
  0b01100110,
  0b00001100,
  0b00011000,
  0b00110000,
  0b01100110,
  0b00000110
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b00000000,
  0b00111100,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111010,
  0b01101100,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00001000,
  0b00010100,
  0b00100010,
  0b01000001,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00000110,
  0b00001100,
  0b00011000,
  0b00110000,
  0b00011000,
  0b00001100,
  0b00000110
},{
  0b00000000,
  0b01100000,
  0b00110000,
  0b00011000,
  0b00001100,
  0b00011000,
  0b00110000,
  0b01100000
},{
  0b00000000,
  0b00000110,
  0b00001100,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00001100,
  0b00000110
},{
  0b00000000,
  0b01100000,
  0b00110000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00110000,
  0b01100000
},{
  0b00000000,
  0b00011110,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011110
},{
  0b00000000,
  0b01111000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b01111000
},{
  0b00000000,
  0b00001110,
  0b00011000,
  0b00011000,
  0b00110000,
  0b00011000,
  0b00011000,
  0b00001110
},{
  0b00000000,
  0b01110000,
  0b00011000,
  0b00011000,
  0b00001100,
  0b00011000,
  0b00011000,
  0b01110000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b01100000,
  0b01100000
},{
  0b00000000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b00000000,
  0b00011000,
  0b00011000,
  0b00110000
},{
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00110000,
  0b00110000,
  0b00110000,
  0b01100000
},{
  0b00000000,
  0b00011000,
  0b00111100,
  0b00111100,
  0b00011000,
  0b00011000,
  0b00000000,
  0b00011000
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b00000110,
  0b00011100,
  0b00011000,
  0b00000000,
  0b00011000
},{
  0b00000000,
  0b00111000,
  0b01000100,
  0b01011100,
  0b01011000,
  0b01000010,
  0b00111100,
  0b00000000
},{
  0b00000000,
  0b00111100,
  0b01100110,
  0b00111100,
  0b00101000,
  0b01100101,
  0b01100110,
  0b00111111
},{
  0b00000000,
  0b00001000,
  0b00011110,
  0b00100000,
  0b00011100,
  0b00000010,
  0b00111100,
  0b00001000
},{
  0b00000000,
  0b00110110,
  0b00110110,
  0b01111111,
  0b00110110,
  0b01111111,
  0b00110110,
  0b00110110
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00111110,
  0b01111111,
  0b00011100,
  0b00011100,
  0b00011100
},{
  0b00000000,
  0b00011100,
  0b00011100,
  0b00011100,
  0b01111111,
  0b00111110,
  0b00011100,
  0b00001000
},{
  0b00000000,
  0b00001000,
  0b00001100,
  0b01111110,
  0b01111111,
  0b01111110,
  0b00001100,
  0b00001000
},{
  0b00000000,
  0b00001000,
  0b00011000,
  0b00111111,
  0b01111111,
  0b00111111,
  0b00011000,
  0b00001000
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00011100,
  0b00111110,
  0b00111110,
  0b01111111,
  0b01111111
},{
  0b00000000,
  0b01111111,
  0b01111111,
  0b00111110,
  0b00111110,
  0b00011100,
  0b00011100,
  0b00001000
},{
  0b00000000,
  0b01100000,
  0b01111000,
  0b01111110,
  0b01111111,
  0b01111110,
  0b01111000,
  0b01100000
},{
  0b00000000,
  0b00000011,
  0b00001111,
  0b00111111,
  0b01111111,
  0b00111111,
  0b00001111,
  0b00000011
},{
  0b00000000,
  0b00111110,
  0b01000001,
  0b01010101,
  0b01000001,
  0b01010101,
  0b01001001,
  0b00111110
},{
  0b00000000,
  0b00111110,
  0b01111111,
  0b01101011,
  0b01111111,
  0b01101011,
  0b01110111,
  0b00111110
},{
  0b00000000,
  0b00100010,
  0b01110111,
  0b01111111,
  0b01111111,
  0b00111110,
  0b00011100,
  0b00001000
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00111110,
  0b01111111,
  0b00111110,
  0b00011100,
  0b00001000
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00101010,
  0b01111111,
  0b00101010,
  0b00001000,
  0b00011100
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00111110,
  0b01111111,
  0b00111110,
  0b00001000,
  0b00011100
},{
  0b00000000,
  0b00000000,
  0b00011100,
  0b00111110,
  0b00111110,
  0b00111110,
  0b00011100,
  0b00000000
},{
  0b11111111,
  0b11111111,
  0b11100011,
  0b11000001,
  0b11000001,
  0b11000001,
  0b11100011,
  0b11111111
},{
  0b00000000,
  0b00000000,
  0b00011100,
  0b00100010,
  0b00100010,
  0b00100010,
  0b00011100,
  0b00000000
},{
  0b11111111,
  0b11111111,
  0b11100011,
  0b11011101,
  0b11011101,
  0b11011101,
  0b11100011,
  0b11111111
},{
  0b00000000,
  0b00001111,
  0b00000011,
  0b00000101,
  0b00111001,
  0b01001000,
  0b01001000,
  0b00110000
},{
  0b00000000,
  0b00001000,
  0b00111110,
  0b00001000,
  0b00011100,
  0b00100010,
  0b00100010,
  0b00011100
},{
  0b00000000,
  0b00011000,
  0b00010100,
  0b00010000,
  0b00010000,
  0b00110000,
  0b01110000,
  0b01100000
},{
  0b00000000,
  0b00001111,
  0b00011001,
  0b00010001,
  0b00010011,
  0b00110111,
  0b01110110,
  0b01100000
},{
  0b00000000,
  0b00001000,
  0b00101010,
  0b00011100,
  0b01110111,
  0b00011100,
  0b00101010,
  0b00001000
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00101010,
  0b00001000,
  0b00101010,
  0b00011100,
  0b00001000
},{
  0b00000000,
  0b01100110,
  0b01100110,
  0b01100110,
  0b01100110,
  0b00000000,
  0b01100110,
  0b01100110
},{
  0b00000000,
  0b00000000,
  0b00010100,
  0b00100010,
  0b01111111,
  0b00100010,
  0b00010100,
  0b00000000
},{
  0b00000000,
  0b00110110,
  0b00110110,
  0b00010100,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00000000,
  0b01100000,
  0b00110000,
  0b00011000,
  0b00001100,
  0b00000110,
  0b00000000
},{
  0b00000000,
  0b00001100,
  0b00001100,
  0b00000110,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00011000,
  0b00011000,
  0b00011000,
  0b00110000,
  0b00000000,
  0b00000000,
  0b00000000
},{
  0b00000000,
  0b00001000,
  0b00011100,
  0b00110110,
  0b01100011,
  0b01000001,
  0b01000001,
  0b01111111
}};
const uint8_t IMAGES_LOOKUP[26][2] =
{
{ 0 , '+' } ,
{ 1 , '-' } ,
{ 2 , '*' } ,
{ 3 , '/' } ,
{ 4 , '%' } ,
{ 5 , '=' } ,
{ 6 , '~' } ,
{ 7 , '^' } ,
{ 8 , '<' } ,
{ 9 , '>' } ,
{ 10 , '(' } ,
{ 11 , ')' } ,
{ 12 , '[' } ,
{ 13 , ']' } ,
{ 14 , '{' } ,
{ 15 , '}' } ,
{ 16 , '.' } ,
{ 17 , ':' } ,
{ 18 , ';' } ,
{ 19 , ',' } ,
{ 20 , '!' } ,
{ 21 , '?' } ,
{ 22 , '@' },
{ 23 , '&' },
{ 24 , '$' },
{ 25 , '#' }
};

#endif /* MAX7219_MAX7219_FONT_H_ */