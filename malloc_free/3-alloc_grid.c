#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - newly allocated space in memory
*
* @str: Character char
*
* Return: 0
*/
int **alloc_grid(int width, int height)
{
	int i, n;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a == NULL)
		{
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
