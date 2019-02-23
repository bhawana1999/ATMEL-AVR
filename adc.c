#include<avr/io.h>
#include<util/delay.h>
#include<avr/adc.h>
#include<avr/lcd.h>

void main()
{

DDRC=0b11111111;
lcd_init();
adc_init();
while(1)
{

unsigned int x = adc_read(0);
dis_cmd(0x8F);
dis_number(x);
_delay_ms(50);
dis_cmd(1);
_delay_ms(1);

}

}
