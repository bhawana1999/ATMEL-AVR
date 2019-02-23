#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>


void main()
{

  DDRC=0b11111111;
  lcd_init();
  int i=0;
  while(1)
  {

    dis_cmd(0x8F);
	dis_number(i);
	_delay_ms(100);
	i++;

	if(i==60)
	i=0;

  }


  }

    
