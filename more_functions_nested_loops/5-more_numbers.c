#include "main.h"
/**
* more_numbers - prints 10 times the numbers
*
* Return: 0
*/
void more_numbers(void)
{
	int n, num;

	for (num = 0; num <= 9; num++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
