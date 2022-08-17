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
	unsigned long int bits;
	unsigned long int m = 1;

	bits = (sizeof(unsigned long int) * 8);
	if (index > bits)
		return (-1);
	m = ~(m << index);
	*n = (*n & m);

	return (1);
}
