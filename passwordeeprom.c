#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>
#include<avr/keypad.h>
#include<avr/adc.h>
#include<avr/eep.h>

void main()
{

DDRA=0b00000000;
PORTA=0b00001111;
DDRD=0b11111111;
DDRC=0b11111111;
DDRB=0b11111111;
lcd_init();
int a[4],c=0,m;
dis_cmd(0x80);
dis_string("ENTER THE PWD.");
_delay_ms(1000);
dis_cmd(1);
_delay_ms(1);
int i;

 /*for(i=0; i<4; i++)
   {
    eeprom_write(i,i);
	_delay_ms(100);
	dis_cmd(1);
	_delay_ms(1);
   

   }
*/
/*if(x==13)
{   for(i=0; i<4; i__)
   {
    eeprom_write(i,i);
   _delay_ms(1000);
   dis_cmd(1);
   _delay_ms(1000);

   }
}*/
while(1){

int x=key();
dis_cmd(1);
_delay_ms(10);
dis_cmd(0x8F);
dis_number(x);

if(x>=0&&x<=9)
{ 
  a[i]=x;
  i++;

 }


/* if(x==14)
 {
   m=1;
   _delay_ms(100);
   dis_cmd(1);
   _delay_ms(1);
   dis_cmd(0x80);
   dis_string("enter new pwd");
for( i=0; i<4; i++)
{   x=key();
   dis_cmd(1);
_delay_ms(10);
dis_cmd(0x8F);
dis_number(x);
eeprom_write(i,x);

}

}

*/
 if(x==15)
 {
   
   if(a[0]==1&&a[1]==2&&a[2]==3&&a[3]==4)
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
