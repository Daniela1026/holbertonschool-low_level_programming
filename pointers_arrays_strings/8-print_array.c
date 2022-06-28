#include "main.h"
#include <stdio.h>
/**
* print_array - print n elements of an array of integers
* @a: Character int
* @n: Character int
*
* Return: 1 and 0
*/
void print_array(int *a, int n)
{
	int m;

	m = 0;
	while (m < n)
	{
		if (m != n - 1)
			printf("%d, ", a[m]);
		else
			 printf("%d", a[m]);
		m++;
	}
putchar('\n');
}
