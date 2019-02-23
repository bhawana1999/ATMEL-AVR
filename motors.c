#include<avr/io.h>
#include<util/delay.h>
#include<avr/timer.h>
#include<avr/adc.h>
#include<avr/lcd.h>


void main()
{int x,y=0;
DDRC=0xff;
lcd_init();
adc_init();
timer_pwm_init();
//timer2_pwm_init();


DDRB=0xff;

while(1)
{

x=adc_read(0);
y=adc_read(1);




/*if(x>=400&&x<=600&&y<10)        //right
{

}
if(x>=500&&x<=530&&y>=1020&&y<=1024) //
{

}

if(x>=30&&x<=60&&y>=500&&y<=600) //back
{

}*/

if(x>=500&&x<=570&&y>=500&&y<=580)//center
{
PORTB=0;
}

if(y>1000) //forward
{
OCR0=255;
PORTB=0b00000101;

}


if(y<50)   //back
{
OCR0=255;
PORTB=~0b00000101;
}

if(x<80) //left
{

OCR0=255;
PORTB=0b00000001;
}

if(x>900)   //right
{

OCR0=255;
PORTB=0b00000100;
}

if(x>750 && x<900)   // less right
{

OCR0=100;
PORTB=0b00000100;
}

if(x>100&&x<400)   //less left
{

OCR0=100;
PORTB=0b00000001;
}

if(y>700&&y<900)   //less forward
{

OCR0=100;
PORTB=0b00000101;
}

if(y<300&&y>100)   //less back
{

OCR0=100;
PORTB=~0b00000101;
}
dis_cmd(0x8f);
dis_number(x);


dis_cmd(0xCf);
dis_number(y);
_delay_ms(100);

dis_cmd(1);
_delay_ms(1);
}
}
