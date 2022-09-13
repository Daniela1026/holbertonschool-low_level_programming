#include "search_algos.h"

/**
 * binary_sh - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: Character int
 * @start: Character size_t
 * @last: Character size_t
 * @value: Character int
 * Return: return the index where value is located
 */
int binary_sh(int *array, size_t start, size_t last, int value)
{
	size_t idx;
	int i;

	if (!array || last < start)
		return (-1);
	printf("Searching in array: ");
	for (idx = start; idx <= last; idx++)
	{
		if (idx != start)
			printf(", ");
		printf("%d", array[idx]);
	}
	printf("\n");
	idx = (start + last) / 2;
	if (array[idx] == value)
		return (idx);
	else if (array[idx]  > value)
		i = (binary_sh(array, start, idx - 1, value));
	else if (array[idx] < value)
		i = (binary_sh(array, idx + 1, last, value));
	return (i);
}

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: Character int
 * @size: Character size_t
 * @value: Character int
 * Return: return the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_sh(array, 0, size - 1, value));
}
