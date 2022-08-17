#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - function that converts a binary number to an unsigned int
* @b: Character char 
* Return: Always 0.
*/
unsigned int binary_to_uint(const char *b)
{
	int i, n, str;
	unsigned int sum = 0, mul;
	
	if (b == NULL)
		return (0);
	
	for (str = 0; b[str]; str++)
	{
		if (b[str] != 48 && b[str] != 49)
			return (0);
	}
	
	str--;
	
	for (i = 0; b[i]; i++)
	{
		mul = 1;
		for (n = 1; n <= (str - i); n++)
			mul = mul * 2;
		mul = mul * (b[i] - '0');
		sum = sum + mul;
	}
	return (sum);
}
