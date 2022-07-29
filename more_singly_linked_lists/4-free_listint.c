#include <stdlib.h>
#include "lists.h"

/**
* free_listint - function  that frees a listint_t list
* @head: Character listint_t pointer
*
* Return: the frees
*/
void free_listint(listint_t *head)
{
	listint_t *frees;

	while (head != NULL)
	{
		frees = head;
		head = head->next;
		free(frees);
	}
}
