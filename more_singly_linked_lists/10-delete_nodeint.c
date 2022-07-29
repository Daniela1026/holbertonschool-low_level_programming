#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - function that deletes the node at
* index of a listint_t linked list
* @head: Character listint_t pointer
* @index: Character int
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *ind;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	node = *head;

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	while (i < (index - 1) && node != NULL)
	{
		node = node->next;
		i++;
	}

	if (i != (index - 1) || node->next == NULL)
	{
		return (-1);
	}

	ind = node->next;
	node->next = (node->next)->next;
	free(ind);

	return (1);
}
