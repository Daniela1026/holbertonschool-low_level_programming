#include "main.h"
/**
* print_last_digit - number
* @n: character value of an integer
*
* Return: las_digit
*/
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour <= 23)
	{
		hour++;

		for (min = 0; min <=59; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}	
}
