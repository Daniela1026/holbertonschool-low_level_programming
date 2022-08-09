#include "main.h"
/**
* print_diagonal - print \
*
* @n: character int diagonal
*
* Return: 0
*/
void print_diagonal(int n)
{
	int i;
	int s;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (s = 1; s < i; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
