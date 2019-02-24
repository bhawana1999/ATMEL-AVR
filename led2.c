#include<avr/io.h>
#include<util/delay.h>
#include<math.h>

void main()
{
 DDRB=0b11111111;



 while(1)
 { int i,a;
   a=0b10000000;
   for(i=0; i<8; i++)
   {
   
   PORTB=a;
   a=a>>1;
   _delay_ms(1000);

  }

  a=0b00000001;
  for(i=0; i<8; i++)
   {
   
   PORTB=a;
   a=a<<1;
   _delay_ms(1000);

  }

 }
 }
