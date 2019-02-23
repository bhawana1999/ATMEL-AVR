#include<avr/io.h>
#include<util/delay.h>
#include<avr/timer.h>
#include<avr/keypad.h>
#include<avr/lcd.h>
#include<avr/int.h>
#include <avr/interrupt.h>
#include<avr/eep.h>



int i=0;


ISR(INT0_vect)
  {
 
   i++;
   eeprom_write(0,i);

    
}
  
  ISR(INT1_vect)
  {

   
   i--;
   eeprom_write(0,i);

   }

void main()
{  

  DDRD=0x00;
  PORTD=0xFF;
  DDRC=0xFF;
	sei();
  GICR |= ((1<<INT0)|(1<<INT1));
  MCUCR |= ((1<<ISC00)|(1<<ISC01)|(1<<ISC10)|(1<<ISC11));
    lcd_init();
  dis_cmd(1);
  _delay_ms(10);

  DDRB=0xFF;
  if((PINA&0b00000100)==0)
  {
   
   while((PINA&0b00000100)==0);

   
   eeprom_write(0,0);
   _delay_ms(1000);
   dis_cmd(1);
   _delay_ms(1000);


   }
  i=eeprom_read(0);

  while(1)
  {

  dis_cmd(0x8F);
   dis_number(i);
   _delay_ms(1000);
   dis_cmd(1);
   _delay_ms(1);

  }

}

  
