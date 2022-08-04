#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
* dlistint_len - function that returns the number of
* elements in a linked dlistint_t list
* @h: Character Pointer
* Return: The number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *number;
	unsigned int i;

	number = h;
	i = 0;
	while (number != NULL)
	{
		number = number->next;
		i++;
	}
	return (i);
}
