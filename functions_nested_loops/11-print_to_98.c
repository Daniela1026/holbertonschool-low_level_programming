#include "main.h"
#include <stdio.h>
/**
* print_to_98 - natural numbers from n to 98
* @n: number
*
* Return: value
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d", 98);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d", 98);
	}
	printf("\n");
}
