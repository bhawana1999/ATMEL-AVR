#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>
#include<avr/adc.h>


void main()

{

DDRC=0b111111111;
lcd_init();
adc_init();


while(1){
int x=adc_read(0);
_delay_ms(100);
dis_cmd(1);
_delay_ms(1);
dis_cmd(0x8F);
dis_number(x/2);

}}
