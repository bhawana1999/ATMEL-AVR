#include<avr/io.h>

#include<util/delay.h>

void main()
{


  DDRA=0b00000000;
  PORTA=0b00000001;
  DDRB=0b00000001;
  int i=0;


  while(1)
  {

    

	
	if((PINA&0b00000001)==0b00000000)
		{

		while((PINA&0b00000001)==0b0000000);
	 i++;
	
     
	 

	 if((i%2)==0)
	 PORTB=0b00000000;
	 else
	 PORTB=0b00000001;

    }
	}
	}
