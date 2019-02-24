#include<avr/io.h>
#include<util/delay.h>


void main()
{

   DDRB=0b00000001;
   DDRA=0b00000000;
   PORTA=0b00000001;   //pulling up


   while(1)
   {


     if(PINA&0b00000001==0b00000001)
	  PORTB=0b00000000;

	  else
	  PORTB=0b00000001;

   }


}
