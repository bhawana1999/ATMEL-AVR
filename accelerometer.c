#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>
#include<avr/adc.h>

void main()
{

DDRC=0xff;
adc_init();
lcd_init();
int x,y,z;

while(1)
{
x=adc_read(0);
y=adc_read(1);
z=adc_read(2);

dis_cmd(0x82);
dis_number(x);

dis_cmd(0x86);
dis_number(y);


dis_cmd(0x89);
dis_number(z);

_delay_ms(100);
dis_cmd(1);
_delay_ms(1);



}


}
