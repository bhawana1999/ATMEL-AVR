#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>
#include<avr/keypad.h>

void main()
{

DDRD=0b11111111;
DDRC=0b11111111;
DDRA=0b00000000;
PORTA=0b00001111;
lcd_init();

while(1)
{
  int x=key();
  dis_cmd(0x8F);
  dis_number(x);
  _delay_ms(100);
  dis_cmd(1);
  _delay_ms(100);
 


  }
}
