#include<avr/io.h>
#include<util/delay.h>
#include<avr/lcd.h>
#include<avr/interrupt.h>
#include<string.h>
#include<avr/uart.h>
unsigned char a[12],data,i=0,j=0x80;

unsigned char cmp(char*a,char*b)
{
for(i=0; i<12; i++)
if(a[i]!=b[i])
{
return 1;
}

else
{return 0;
}

}




ISR(USART_RXC_vect)
{
data=UDR;
a[i]=data;
dis_cmd(j);

dis_data(data);


if(i==12)
{
if(!(cmp(a,"100028EF74A30")))
{

_delay_ms(100);
dis_cmd(1);
_delay_ms(1);
dis_cmd(0x80);
dis_string("HEYYY BHAWANA");

}

}
i++;
j++;

}
void main()
{
_delay_ms(100);
dis_cmd(1);
_delay_ms(1);

DDRB=0xff;
sei();
DDRC=0xff;
lcd_init();

uart_init();

UCSRB|=(1<<RXCIE);

while(1)
{
PORTB=0xff;
_delay_ms(1000);
PORTB=0x00;


_delay_ms(1000);
}




}
