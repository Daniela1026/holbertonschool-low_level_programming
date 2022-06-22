#include "main.h"
/**
* puts2 - prints a string
* @str: Character char
*
* Return: 1 and 0
*/
void puts2(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
		l++;
	}
	_putchar('\n');
}
