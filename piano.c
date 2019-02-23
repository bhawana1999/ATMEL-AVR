#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>
#include<avr/keypad.h>
//#include<avr/adc.h>
#include<avr/timer.h>
#include<avr/interrupt.h>

void main()
{
DDRD=0xff;
DDRA=0;
PORTA=0xff;
timer_ctc_init();
sei();


while(1)
{

OCR0=150;
_delay_ms(100);


}



}
