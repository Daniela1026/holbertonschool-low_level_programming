#include "main.h"
/**
* print_square - print #
* @size: character int
* Return: 0
*/
void print_square(int size)
{
        int l = 0;
	int lin = 0;

        if (size < 1)
		_putchar('\n');
	while (lin < size)
	{
		while (l < size)
		{
			_putchar('#');
			l++;
		}
		_putchar('\n');
		lin++;
	}
}
