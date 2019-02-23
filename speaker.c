#include<avr/io.h>
#include<util/delay.h>
#include<avr/timer.h>

void main()
{
timer_ctc_init();

//DDRB=0xff;
while(1)
{
OCR0=200;
_delay_ms(100);
OCR0=240;
_delay_ms(100);


}

}
