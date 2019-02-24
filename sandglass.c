#include<avr/io.h>
#include<util/delay.h>
#include<math.h>

void main()
{
  DDRB=0b11111111;
  int k=0;
  int b=0b00000000;
 
  while(1)
  { int i;
    int a=0b10000000;
    
	for(i=7; i>=k; i--)
	{
	 PORTB=a|b;
	 a=a>>1;
	 _delay_ms(500);

	 

	 }
	 b=PORTB;
	 k=k+1;
}


}
