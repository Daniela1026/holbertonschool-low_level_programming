#include "main.h"
#include <stddef.h>

/**
* clear_bit - function that sets the value of a bit
* to 0 at a given index.
* @n: Character int
* @index: Character int
* Return: Always 0.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (n == NULL)
		return (-1);

	bit = 1 << index;

	if ((bit | *n) == *n)
		*n = *n ^ bit;
	return (1);
}
