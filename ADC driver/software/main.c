/*
 * software.c
 *
 * Created: 2/27/2024 9:33:14 AM
 * Author : Kirollos
 */ 

#include <avr/io.h>
#include "ADC.h"
volatile unsigned int volt=0;
volatile float	x=0;
int main(void)
{
    /* Replace with your application code */
	ADC_init();
DDRC=0xFF;
PORTC=0x00;
    while (1) 
    {
	volt= ADC_readChannel(0);
	x=(float)((volt*5)/1023);
	
	PORTC=x;	

	
	}
	
}
		
	
	

