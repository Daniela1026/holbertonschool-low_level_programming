#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
* print_dlistint - function that prints all the
* elements of a dlistint_t list
* @h: Character Pointer
* Return: The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int elem;

	if (h == NULL)
		return (0);

	for (elem = 0; h; elem++, h = h->next)
		printf("%d\n", h->n);
	return (elem);
}
