#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>
#include<avr/interrupt.h>
#include<string.h>
#include<avr/uart.h>

void main()
{
uart_init();

DDRB=0xff;
unsigned char a;


while(1)
{
a=uart_rx();
if(a=='L')
PORTB= 0b00001000;
if(a=='R')
PORTB=0b00000010;
if(a=='F')
PORTB=0b00001010;
if(a=='B')
PORTB=0b00000101;




}


}
