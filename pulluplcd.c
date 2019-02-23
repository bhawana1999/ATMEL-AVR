#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>


void main()
{
  DDRA=0b00000000;
  PORTA=0b00000001;

  DDRC=0b11111111;
  lcd_init();
  int i=0;
  while(1)
  {
   
    dis_cmd(0x8F);
	dis_number(i);
	_delay_ms(100);

	if((PINA&0b00000001)==0b00000000)
	i++;

	else
	i--;

	

  }


  }

    
