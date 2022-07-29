#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list
* @head: Character listint_t pointer
*
* Return: 0
*/
void free_listint2(listint_t **head)
{
	listint_t *frees;

	if (head == NULL || *head == NULL)
		return;
	while (*head)
	{
		frees = *head;
		*head = (*head)->next;
		free(frees);
	}
	*head = NULL;
}
