#include<avr/io.h>
#include<util/delay.h>
void main()
{
   DDRA=0b00000000;
  PORTA=0b00000011;
  DDRB=0b11111111;
  int data[10];
  int i=0;
data[1]=0b00000110;
data[0]=0b00111111;
data[2]=0b01011011;
data[3]=0b01001111;
data[4]=0b01100110;
data[5]=0b01101101;
data[6]=0b01111101;
data[7]=0b00000111;
data[8]=0b11111111;
data[9]=0b11101111;

  while(1)
  {

 
  
    if((PINA&0b00000001)==0b00000000)
	{
	 while((PINA&0b00000001)==0b00000000);
	i++;
    }

	if((PINA&0b00000010)==0b00000000)
	{

	while((PINA&0b00000010)==0b00000010);

	i--;


	}

       PORTB=~(data[i]);

  
  if(i==9)
  i=0;

  
  }

  }
  
