#include <avr/io.h>
#include <util/delay.h>
#include <avr/timer.h>
void main()
{
	DDRB = 0xff;
	timer_pwm_init();
	timer2_pwm_init();
	while(1)
	{
		//PORTB = 0b00000011;
		//_delay_ms(1000);
		PORTB = 0b00001001;
		_delay_ms(1000);
		//PORTB = 0b00001010;
		//_delay_ms(1000);
		for(int i=0; i<255; i++)
		{
			OCR0 = i;
			OCR2 = (255-i);
			_delay_ms(10);
		}
		for(int i=255; i>0; i--)
		{
			OCR0 = i;
			OCR2 = (255-i);
			_delay_ms(10);
		}
	}
}
