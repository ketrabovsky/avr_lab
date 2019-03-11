#include "HD44780.h"
//#define F_CPU 1000000  // 1 MHz
//#define F_CPU 14700000
#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
	LCD_Initalize();
	//LCD_WriteData('a');
	LCD_WriteText("juhu");
	return 0;
}
