#include "main.h"
/**
* _puts - prints a string
* @str: Character char
*
* Return: 1 and 0
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
		_putchar('\n');
	}
}
