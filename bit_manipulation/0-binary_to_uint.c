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
	unsigned int bin = 0, str = 0;

	if (b == NULL)
		return (ent);

	for (bin = 0; b[bin] != '\0'; bin++)
	{
		bin -= 1;
	}

	while (b[str])
	{
		if ((b[str] != '0') && (b[str] != '1'))
			return (ent);

		if (b[str] == '1')
			ent += (1 * (1 << bin));
		str++;
		bin--;
	}
	return (ent);
}
