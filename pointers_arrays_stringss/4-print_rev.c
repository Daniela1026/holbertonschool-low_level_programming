#include "main.h"
/**
* print_rev - reverse
* @s: Character char
*
* Return: 1 and 0
*/
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != 0)
	{
		l++;
	}
	while (l > 0)
	{
		l--;
		_putchar(s[l]);
	}
	_putchar('\n');
}
