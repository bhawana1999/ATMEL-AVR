#include<avr/io.h>
#include<util/delay.h>

void main()
{
   DDRD=0b00000011;
   DDRC=0b11111111;
  int data[10];
data[1]=0b00000110;
data[0]= 0b00111111;
data[2]=0b01011011;
data[3]=0b01001111;
data[4]=0b01100110;
data[5]=0b01101101;
data[6]=0b01111101;
data[7]=0b00000111;
data[8]=0b01111111;
data[9]=0b01101111;
int l,r;
  while(1)
  {

    
    for(int i=0; i<=99; i++)
	{
       l=i/10;
	   r=i%10;
	   PORTD=0b00000010;
	   PORTC=data[l];

	   _delay_ms(50);

	   PORTD=0b00000001;
	   PORTC=data[r];

	   _delay_ms(50);

  

   
  }

 

  }





}
