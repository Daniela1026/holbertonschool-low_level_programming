#include "main.h"
/**
* more_numbers - prints 10 times the numbers
*
* Return: 0
*/
void more_numbers(void)
{
	int n;
	int num;

	for (num = 0; num <= 9; num++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (num > 9)
			_putchar((num / 10) + '0');

			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
