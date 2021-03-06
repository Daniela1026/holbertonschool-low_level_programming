#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* *create_array -create array of chars
* @size: Character int
* @c: Character char
* Return: 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size <= 0)
	return (0);
		a = malloc(sizeof(char) * size);
		if (a == NULL)
			return (NULL);

	i = 0;
	while (i < size)
	{
		a[i] = c;
	i++;
	}
	return (a);
}
