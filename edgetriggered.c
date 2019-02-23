#include<avr/io.h>
#include<util/delay.h>
#include<avr/timer.h>
#include<avr/keypad.h>
#include<avr/lcd.h>
#include<avr/int.h>

void main()
{
  DDRD=0x00;
  PORTD=0xFF;

  int0_ri_init();

  DDRB=0xFF;
dt
  while(1)
  {
  }

  }

  ISR(INT0_vect)
  {

    PORTB=0xFF;
	_delay_ms(100);
	PORTB=0x00;
	_delay_ms(100);
}
