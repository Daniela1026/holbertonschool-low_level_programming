#include <stdio.h>
#include "lists.h"

/**
* print_list - function prints all the elements of a list_t
* @h: Character list_t pointer
*
* Return: i
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h ->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
