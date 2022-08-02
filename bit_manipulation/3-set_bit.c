#include "main.h"
#include <stddef.h>

/**
* set_bit - function that sets the value of a bit
* to 1 at a given index
* @n: Character int
* @index: Character int
* Return: Alway1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > ((sizeof(unsigned long int) * 8) - 1)))
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
