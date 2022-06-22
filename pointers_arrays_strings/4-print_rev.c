#include "main.h"
/**
* _strlen - lenght of a string
* @s: Character char
*
* Return: 1 and 0
*/
void print_rev(char *s)
{
	int l = 0;
	int r;

	while (s[r++])
		l++;
	for (r = l - 1; r >= 0; r--)
	{
		_putchar(s[r]);
		_putchar('\n');
	}
}
