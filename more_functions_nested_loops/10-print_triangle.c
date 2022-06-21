#include "main.h"
/**
* _isupper - uppercase and otherwise character
* @c: Character int
*
* Return: 1 and 0
*/
void print_triangle(int size)
{
	int s;
	int z;

	for (s = 1; s <= size; s++)
	{
		for (z = 1; z <= size; z++)
		{
			if (z <= size - s)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
