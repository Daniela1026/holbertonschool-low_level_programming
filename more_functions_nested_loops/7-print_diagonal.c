#include "main.h"
/**
* print_diagonal - print \
* @n: character int
* Return: 0
*/
void print_diagonal(int n)
{
	int l = 0;
	int lin = l;

	while (n > 0)
	{
		while (lin > 0)
		{
			_putchar(' ');
			lin--;
		}
		_putchar('\\');
		_putchar('\n');
			l++;
		n--;
	}
	if (l < 1)
		_putchar('\n');
}

