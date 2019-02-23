#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>
#include<avr/keypad.h>
#include<avr/adc.h>

void main()
{

DDRA=0b00000000;
PORTA=0b00001111;
DDRD=0b11111111;
DDRC=0b11111111;
DDRB=0b11111111;
lcd_init();
int a=0,c=0;
dis_cmd(0x80);
dis_string("ENTER THE PWD.");
_delay_ms(1000);
dis_cmd(1);
_delay_ms(1);

while(1){

int x=key();
dis_cmd(1);
_delay_ms(10);
dis_cmd(0x8F);
dis_number(x);

if(x>=0&&x<=9)
{ 
 a=a*10+x;
 }



 if(x==15)
 {
   
   if(a==1999)
   {
      PORTB=0b11111101;

    }


	else
	{
	 c++;
	 a=0;
     }
   }



if(c==3)
{

PORTB=0b11111110;
_delay_ms(1000);
dis_cmd(1);
_delay_ms(1);
dis_cmd(0x80);
dis_string("ACCESS DENIED");

}


}
     


}
