#include <stddef.h>
#include "function_pointers.h"

/**
* array_iterator - Element of an array
* @array: Character int
* @size: Character size_t
* @action: charactr void
* Return: Always 0.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
