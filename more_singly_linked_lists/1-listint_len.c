#include <stdio.h>
#include "lists.h"

/**
* listint_len - function in a linked listint_t list.
* @h: Character listint_t pointer
*
* Return: elements
*/
size_t listint_len(const listint_t *h)
{
	int elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
