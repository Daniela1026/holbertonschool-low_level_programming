#include "main.h"
/**
* print_square - print #
* @size: character int
* Return: 0
*/
void print_square(int size)
{
	int l, lin;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (lin = 0; lin < size; lin++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
