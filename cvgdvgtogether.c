#include<avr/io.h>

#include<util/delay.h>

void main()
{DDRB=0b11111111;
 
 while(1)
 {
   int i;
   int a=0b00000001;
   int b=0b10000000;

   for(i=0; i<4; i++)
   {
    PORTB=a|b;
	_delay_ms(1000);
	a=a<<1;
	b=b>>1;

	}

	a=0b00001000;
	b=0b00010000;
	for(i=0; i<4; i++)
   {
    PORTB=a|b;
	_delay_ms(1000);
	a=a>>1;
	b=b<<1;

	}

}	}

