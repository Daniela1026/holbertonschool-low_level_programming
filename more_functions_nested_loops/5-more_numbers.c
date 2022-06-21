#include "main.h"
/**
* more_numbers - prints 10 times the numbers
*
* Return: 0
*/
void more_numbers(void)
{
	int n = 0;
	char num;

	while (n <= 9)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
	}
}
