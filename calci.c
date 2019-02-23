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
int a=0,b=0,m=0;
char f,c,t=0;
while(1){




int x=key();

dis_cmd(0xC0);
dis_string("                ");

_delay_ms(10);
dis_cmd(0xCF);
dis_number(x);

if(x==14)
{ _delay_ms(1000);
  dis_cmd(1);
  _delay_ms(1);
  t=0;
  m=0;
}

 if(t>0)
  { a=c;
     dis_cmd(0x81);
  dis_number(a);
  }


if(x>=0&&x<=9)
{
  
 
    

 if(m==0 &&t==0)
 {
   a=x;
  dis_cmd(0x81);
  dis_number(a);

 }


 if(m==1)
 {
 b=x;
 dis_cmd(0x83);
  dis_number(b);
  }

 }



 if(x==10)
 {
   f='+';
   dis_cmd(0x82);
   dis_data('+');
   m=1;

   
   }


 if(x==11)
 {
   f='-';
   dis_cmd(0x82);
   dis_data('-');
   m=1;

   
   }
   
 if(x==12)
 {
   f='*';
   dis_cmd(0x82);
   dis_data('*');
   m=1;

   
   }
   
 if(x==13)
 {
   f='/';
   dis_cmd(0x82);
   dis_data('/');
   m=1;

   
   }
   
 
if(x==15)
{ 
   t++;
   m=0;
  if(f=='+')
  {
  _delay_ms(1000);
  dis_cmd(1);
  _delay_ms(1000);
  dis_cmd(0xCF);
  c=a+b;
    dis_number(c);

	}

	if(f=='-')
  {
  _delay_ms(1000);
  dis_cmd(1);
  _delay_ms(1000);
  dis_cmd(0xCF);
  c=a-b;
    dis_number(c);

	}

	if(f=='/')
  {
  _delay_ms(1000);
  dis_cmd(1);
  _delay_ms(1000);
  dis_cmd(0xCF);
  c=a/b;
    dis_number(c);

	}
	if(f=='*')
  {
  _delay_ms(1000);
  dis_cmd(1);
  _delay_ms(1000);
  dis_cmd(0xCF);
  c=a*b;
    dis_number(c);

	}


   	
	}

	}
}
