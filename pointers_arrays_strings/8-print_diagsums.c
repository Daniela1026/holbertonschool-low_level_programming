#include "main.h"
#include <stdio.h>
/**
* print_diagsums - sum two diagonals
* @a: Character char pointer
* @size: Character int
*
*/
void print_diagsums(int *a, int size)
{
	int n;
	int sum1 = 0;
	int sum2 = 0;

	for (n = 0; n < (size * size); n += size + 1)
		sum1 += a[n];
	for (n = size - 1; n < (size * size) - 1; n += size - 1)
		sum2 += a[n];
	printf("%d, %d\n", sum1, sum2);
}
