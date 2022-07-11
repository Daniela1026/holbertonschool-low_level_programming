#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - Contain all the values from min to max
* @min: Character int
* @max: Character int
* Return: 0
*/
int *array_range(int min, int max)
{
	int i, a;
	int *n;

	if (min > max)
		return (NULL);

	a = max - min + 1;
	n = malloc(sizeof(int) * a);
	if (n == NULL)
		return (NULL);

	i = 0;
	while (i < a)
	{
		n[i] = min++;
		i++;
	}
	return (n);
}
