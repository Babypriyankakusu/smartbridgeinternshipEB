/*
 * GccApplication16.c
 *
 * Created: 14-05-2019 09:50:35
 * Author : Hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif 
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
    /* Replace with your application code */
	DDRA=0xff;
	
	
    while (1) 
    {
		   PORTA=0B01111110;
	    _delay_ms(1000);
	    PORTA=0B00110000;
	    _delay_ms(1000);
	    PORTA=0B01101101;
	    _delay_ms(1000);
	    PORTA=0B01111001;
	    _delay_ms(1000);
	    PORTA=0B00110011;
	    _delay_ms(1000);
	    PORTA=0B01011011;
	    _delay_ms(1000);
	    PORTA=0B01011111;
	    _delay_ms(1000);
	    PORTA=0B01110000;
	    _delay_ms(1000);
	    PORTA=0B01111111;
	    _delay_ms(1000);
	    PORTA=0B01111011;
	    _delay_ms(1000);
	    PORTA=0B01110111;
	    _delay_ms(1000);
	    PORTA=0B00011111;
		_delay_ms(1000);
		PORTA=0B01001110;
	    _delay_ms(1000);
		PORTA=0B00111101;
		_delay_ms(1000);
		PORTA=0B01001111;
		_delay_ms(1000);
		PORTA=0B01000111;
		_delay_ms(1000);
		PORTA=0B01111011;
		_delay_ms(1000);
		PORTA=0B00110111;
		_delay_ms(1000);
		PORTA=0B00001110;
		_delay_ms(1000);
		PORTA=0B01100111;
		_delay_ms(1000);		
    }
}

