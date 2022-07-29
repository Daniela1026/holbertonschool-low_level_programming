#include <stdio.h>
#include "lists.h"

/**
* print_listint - function prints all the elements of a listint_t list
* @h: Character listint_t pointer
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t numbernodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numbernodes++;
		h = h->next;
	}
	return (numbernodes);
}
