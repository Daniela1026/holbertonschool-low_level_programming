#include "main.h"
/**
* print_triangle - triangle
* @size: Character int
*
* Return: 1 and 0
*/
void print_triangle(int size)
{
	int s, z;

	if (size > 0)
	{
		for (s = 1; s <= size; s++)
	{
		for (z = 1; z >= size; z--)
		{
			if (s < z)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	}
	else if (size <= 0)
			_putchar('\n');
	}
