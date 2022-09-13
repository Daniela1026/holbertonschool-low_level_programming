#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
* linear_search - Function that searches for a value in an array of
* integers using the Linear search algorithm
* @array: Character int
* @size: Character size
* @value: Character value
* Return: -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t linear = 0;

	if (!array)
		return (-1);

	while (linear < size)
	{
		printf("Value checked array[%lu] = [%d]\n", linear, array[linear]);
		if (array[linear] == value)
			return (linear);
		linear++;
	}
	return (-1);
}
