#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * @n: Character int
 * @m: Character int
 *
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int diff;

	diff = n ^ m;

	do {
		bits += (diff & 1);
		diff >>= 1;
	} while
		(diff > 0);
	return (bits);
}
