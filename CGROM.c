#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>


void main()
{

  DDRA=0b1111111;
  lcd_init();
  int i=0;
  while(1)
  {
   
    dis_cmd(0x40);
	dis_data(0b00000000);
	dis_data(0b00011111);
	dis_data(0b00011111);
	dis_data(0b00011000);
	dis_data(0b00011000);
	dis_data(0b00011000);
	dis_data(0b00000000);
	dis_data(0b00000000);

	dis_cmd(0x48);
	dis_data(0b00000100);
	dis_data(0b00001010);
	dis_data(0b00000100);
	dis_data(0b00000100);
	dis_data(0b00001110);
	dis_data(0b00000100);
	dis_data(0b00000100);
	dis_data(0b00000000);

	dis_cmd(0x80);
	dis_data(0);

	dis_cmd(0x8F);
	dis_data(1);

	for(i=1; i<15; i++)
	{ 

	 dis_cmd(0x80+i);
	 dis_data(' ');
	 dis_data('-');
	 _delay_ms(50);

	 }

}

}
    
