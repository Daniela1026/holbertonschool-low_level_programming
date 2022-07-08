#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - pointer to a 2 dimensional array of integers
*
* @width: Character int
* @height: Character int
*
* Return: 0
*/
int **alloc_grid(int width, int height)
{
	int i, n;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int) * height);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (n = 0; n < 0; n++)
				free(a[n]);
			free(a);
			return (NULL);
		}
		for (n = 0; n < width; n++)
		{
			a[i][n] = 0;
		}
	}
	return (a);
}
