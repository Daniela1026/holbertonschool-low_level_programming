#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - function that frees a list_t list
* @head: Character list_t pointer
*
*/
void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}


