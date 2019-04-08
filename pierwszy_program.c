#include "HD44780.h"
//#define F_CPU 1000000  // 1 MHz
//#define F_CPU 14700000
#include <util/delay.h>
#include <avr/io.h>

#define START 0
#define ERROR() {LCD_WriteText("ERROR");LCD_WriteData((unsigned char)__LINE__);}
#define SLA_W 0
#define DATA 0
#define MT_SLA_ACK 0
#define MT_DATA_ACK 0


void delay_ms( int ms)
	{
	volatile long unsigned int i;
	for(i=0;i<ms;i++)
		_delay_ms(1);
	}

int main(void)
{
	
	int i = 0;
	LCD_Initalize();
	//LCD_WriteData('a');
	/*
	ERROR();
	while(1){}
	TWCR = (1<<TWINT)|(1<<TWSTA)|(1<<TWEN);
	while (!(TWCR & (1<<TWINT)));
	if ((TWSR & 0xF8) != START) ERROR();
	
	
	
	TWDR = SLA_W;
	TWCR = (1<<TWINT) | (1<<TWEN);

	while (!(TWCR & (1<<TWINT)));

	if ((TWSR & 0xF8) != MT_SLA_ACK) ERROR();
	TWDR = DATA;
	TWCR = (1<<TWINT) | (1<<TWEN);

	while (!(TWCR & (1<<TWINT)));

	if ((TWSR & 0xF8) != MT_DATA_ACK) ERROR();

	TWCR = (1<<TWINT)|(1<<TWEN)| (1<<TWSTO);
	*/
	for(;;)
	{
		char data = i % 26 + 65;
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		LCD_WriteData(data);
		delay_ms(1000);
		LCD_Clear();
		i++;
	}
	return 0;
}
