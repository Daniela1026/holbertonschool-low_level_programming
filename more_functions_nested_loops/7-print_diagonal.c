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
	int l, lin;

	if (n > 0)
	{
		for (l = 0; l <= n; l++)
		{
			for (lin = 1; lin <= l; lin++)
			{
				if (lin != l)
					_putchar(' ');
				else if (lin == l)
				{
			_putchar('\\');
				_putchar('\n');
				}
				else
					_putchar('\n');
			}
		}
	}
}
