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
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
        free(grid[i]);
        free(grid);
}
