#include "main.h"
#include <stddef.h>

/**
* get_bit - function that returns the value of a bit
* at a given index.
* @n: Character int
* @index: Character int
* Return: Always -1.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;
	int i;

	bit = (sizeof(unsigned long int) * 8);
	if (index > bit)
		return (-1);

	i = ((n >> index) & 1);
	return (i);
}
