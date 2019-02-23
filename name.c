#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>

void main()
{
DDRC=0xff;

lcd_init();

while(1)
{
dis_cmd(0x80);
dis_string("sona");




}





}
