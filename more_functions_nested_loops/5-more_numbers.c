#include "main.h"
/**
* more_numbers - prints 10 times the numbers
*
* Return: 0
*/
void more_numbers(void)
{
	int n, num;

	for (n = 0; n <= 9; n++)
	{
		for (num = 0; num <= 14; n++)
		{
			if (num > 9)
			_putchar((num / 10) + '0');

			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
