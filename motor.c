#include<avr/io.h>

#include<util/delay.h>


void main()
{

  DDRD=0b01111111;

  while(1)
  {

    PORTD=0b01011110;

	_delay_ms(1000);

	PORTD=0b00111101;

	_delay_ms(1000);

	}


	}
