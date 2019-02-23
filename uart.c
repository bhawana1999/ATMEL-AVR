#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>
#include<avr/keypad.h>
#include<avr/adc.h>
#include<avr/eep.h>
#include<avr/uart.h>
void main()
g{
DDRB=0xff;
DDRC=0xff;
lcd_init();
int i=0;
uart_init();
int x;
i=0x80;
while(1)

{

x=uart_rx();
PORTB=x;
dis_cmd(i);
dis_data(x);
i++;

if(i==0x8F)
{
i=0xC0;

}


if(i==0xC0)
{

_delay_ms(100);
dis_cmd(1);
_delay_ms(1);
i=0x80;
}


}



}
