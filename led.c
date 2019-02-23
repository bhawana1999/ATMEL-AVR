#include<avr/io.h>
#include<util/delay.h>
#include<avr/timer.h>
#include<avr/interrupt.h>
#include<avr/lcd.h>
unsigned int count=0;

int i=0,j=0,k=0;
void main()
{


DDRC=0b11111111;
lcd_init();
//DDRB=0b11111111;
timer_normal_init();
sei();

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



	if(i==60)
    {	i=0;
        j++;

     }

	 if(j==60)
	 {
	  j=0; 
	  k++;

	  }

}
}  
ISR(TIMER0_OVF_vect)
{count++;

if(count==490)
{
 i++;
 count=0;

 }


 }
