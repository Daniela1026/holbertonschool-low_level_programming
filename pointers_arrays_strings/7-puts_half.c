#include "main.h"
/**
* puts_half - print the second
* @str: Character char
*
* Return: 1 and 0
*/
void puts_half(char *str)
{
	int c = 0;
	int n = 0;

	while (*(str + c))
		c++;
	n = c / 2;

	if (c % 2)
		n = 1;
	while (n < c)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
