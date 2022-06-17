#include "main.h"
/**
* print_sign - the sign of a number
* @n: Character int
*
* Return: 0
*/
int print_sign(int n)
{
	while (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
