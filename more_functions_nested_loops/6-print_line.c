#include "main.h"
/**
* print_line - print _
* @n: character int
* Return: 0
*/
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}
	_putchar('\n');
}
