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
int a[4],c=0;
dis_cmd(0x80);
dis_string("ENTER THE PWD.");
_delay_ms(1000);
dis_cmd(1);
_delay_ms(1);
int i=0;
while(1){

int x=key();

dis_cmd(0x8F);
dis_number(x);
dis_cmd(1);
_delay_ms(10);

if(x>=0&&x<=9)
{ 
  a[i]=x;
  i++;

 }



 if(x==15)
 {
   
   if(a[0]==1&&a[1]==9&&a[2]==9&&a[3]==9)
   {
      PORTB=0b11111101;

    }


	else
	{
	 c++;
	 a[0]=0;
	 a[1]=0;
	 a[2]=0;
	 a[3]=0;
	 i=0;
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
