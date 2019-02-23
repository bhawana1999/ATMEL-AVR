#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>
#include<avr/adc.h>
#include<avr/timer.h>
void pink()
{

PORTB=0b111111111;
   _delay_ms(100);
   
  for(int i=80; i<100; i++)
  {
  
   OCR0=i;    //blue
   OCR2=255-i;  //red
   _delay_ms(10);
   }
}
void main()
{

DDRA=0;
int x=0,y=0;
//PORTA=0xff;
DDRC=0xff;
DDRB=0xff;
lcd_init();
adc_init();
timer_pwm_init();
timer2_pwm_init();

while(1)
{
x=adc_read(0);
y=adc_read(1);
dis_cmd(0x8f);
dis_number(x);


dis_cmd(0xCf);
dis_number(y);
_delay_ms(100);

dis_cmd(1);
_delay_ms(1);

if(x>=500&&x<=570&&y>=500&&y<=580)
{

OCR0=255;
OCR2=255;
}


if(x>=400&&x<=600&&y<10)
{
pink();
}
if(x>=500&&x<=530&&y>=1020&&y<=1024)
{
OCR0=255;
OCR2=0;
}
if(x>=900&&x<=1010&&y>=500&&y<=610)
{
OCR2=255;
OCR0=0;
}
/*if(x>=30&&x<=60&&y>=500&&y<=600)
{
for(int i=180; i<255; i++)
{OCR0=i;
_delay_ms(100);}
OCR2=255;
}*/

}
}

