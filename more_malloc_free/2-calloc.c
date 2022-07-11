#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - memory for array
* @nmemb: Character int
* @size: Character int
* Return: 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = malloc(nmemb * size);
	if (n == NULL)
		return (NULL);

	i = 0;
	while (i < (nmemb * size))
	{
		n[i] = 0;
		i++;
	}
	return (n);
}
