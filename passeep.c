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
int a[4],c=0;

int i=0;

PORTD &= ~(1<<0);
_delay_ms(2000);
if((PINA&0b00000001)==0)
{
	eeprom_write(0,1);
	eeprom_write(1,2);
	eeprom_write(2,3);
	eeprom_write(3,4);
	dis_cmd(0x80);
	dis_string("setting pass");
	_delay_ms(1000);
	dis_cmd(1);
   _delay_ms(1000);

}

dis_cmd(0x80);
dis_string("ENTER THE PWD.");
_delay_ms(1000);
dis_cmd(1);
_delay_ms(1);


/*int x=key();
if(x==13)
{


eeprom_write(0,1);
eeprom_write(1,2);
eeprom_write(2,3);
eeprom_write(3,4);
dis_cmd(0x80);
dis_string("setting pass");


_delay_ms(1000);
   dis_cmd(1);
   _delay_ms(1000);

   }
*/
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


 if(x==14)
 {
// _delay_ms(100);
// dis_cmd(1);
// _delay_ms(1);

 dis_cmd(0xC0);
 dis_string("new pwd");
 _delay_ms(1000);
dis_cmd(1);
_delay_ms(1);
 for(i=0; i<4; i++)
 {
 x=key();
 dis_cmd(1);
_delay_ms(10);
dis_cmd(0x8F);
dis_number(x);

 eeprom_write(i,x);

 }
_delay_ms(1000);
 dis_cmd(1);
 _delay_ms(1);
 dis_cmd(0xC0);
 dis_string("pwd, chngd");
 //a[]={0,0,0,0};


 }



 if(x==15)
 {
   
   if(a[0]==eeprom_read(0)&&a[1]==eeprom_read(1)&&a[2]==eeprom_read(2)&&a[3]==eeprom_read(3))
   {
      PORTB=0b11111101;
	  _delay_ms(1000);
      dis_cmd(1);
      _delay_ms(1);
      dis_cmd(0x80);
      dis_string("pwd matched");


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
dis_string("access denied");

}


}
     


}
