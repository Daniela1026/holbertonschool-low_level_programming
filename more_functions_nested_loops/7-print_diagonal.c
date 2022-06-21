#include "main.h"
/**
* print_diagonal - print \
* @n: character int
* Return: 0
*/
void print_diagonal(int n)
{
	int l, lin;

	for (lin = 0; lin < n; lin++)
	{
		for (l = 0; l < n; l++)
		{
			_putchar(' ');
		}
			_putchar(92);
		_putchar('\n');
	}
	if (n <=0)
	_putchar('\n');
}
