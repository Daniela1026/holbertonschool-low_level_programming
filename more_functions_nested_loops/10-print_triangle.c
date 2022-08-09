#include "main.h"
/**
* print_triangle - triangle
* @size: Character int
*
* Return: 1 and 0
*/
void print_triangle(int size)
{
	int s, z, i;

	if (size <= 0)
		_putchar('\n');

	for (s = 1; s <= size; s++)
	{
		for (z = 1; z <= (size - s); z++)
			_putchar(' ');

		for (i = 1; i <= s; i++)
			_putchar('#');

		_putchar('\n');
	}
}
