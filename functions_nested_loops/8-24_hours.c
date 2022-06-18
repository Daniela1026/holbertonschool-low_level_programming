#include "main.h"
/**
* jack_bauer - hour min
*
* Return: las_digit
*/
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
