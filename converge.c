#include<avr/io.h>
#include<util/delay.h>
#include<math.h>

void main()
{
DDRB=0b11111111;
 int i;
 while(1)
 { int a=0b00000001;
   int b=0b10000000;

   
   for(i=0;i<=3; i++)
   {
    PORTB=a|b;
	_delay_ms(1000);
	a=a<<1;
	b=b>>1;
	}
}
}
