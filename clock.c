#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>

void main()
{

  DDRC=0b11111111;
  lcd_init();

   int i=0,j=0,k=0;
   dis_cmd(0x8D);
   dis_data(':');
   dis_cmd(0x8A);
   dis_data(':');

   dis_cmd(0xC8);
   dis_string("h");

   dis_cmd(0xCB);
   dis_string("m");

   dis_cmd(0xCE);
   dis_string("s");

  while(1)
  {

    dis_cmd(0x8F);
    dis_number(i);

	dis_cmd(0x8C);
	dis_number(j);

	dis_cmd(0x89);
	dis_number(k);
	_delay_ms(1000);
	i++;

	if(i==60)
    {	i=0;
        j++;

     }

	 if(j==60)
	 {
	  j=0; 
	  k++;

	  }



  //setting alarm

if(k==00&&j==00&&i==19)
PORTA|=(1<<3);



  }


  }
