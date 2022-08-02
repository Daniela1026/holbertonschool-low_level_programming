#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - function that converts a binary number to an unsigned int
* @b: Character char 
* Return: Always 0.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int ent = 0;
	unsigned int bin;

	if (b == NULL)
		return (0);

	for (bin = 0; b[bin] != '\0'; bin++)
	{
		if (b[bin] < '0' || b[bin] > '1')
			return (0);
	}

	for (bin = 0; b[bin] == 0 || b[bin] == '1'; bin++)
	{
		ent = ent << 1;
		if (b[bin] == '1')
			ent++;
	}
	return (ent);
}
