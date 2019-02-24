#include<avr/io.h>
#include<util/delay.h>

void main()
{DDRC=0b11111111;
 DDRD=0b00000011; 
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

while(1)
{
  PORTD=0b00000010;
  PORTC=data[1];
  _delay_ms(50);


  PORTD=0b00000001;

  PORTC=data[6];
  _delay_ms(50);

  }


  }
 
