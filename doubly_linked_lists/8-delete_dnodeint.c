#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* delete_dnodeint_at_index - function that deletes the node at
* index index of a dlistint_t linked list
* @head: Character Pointer
* @index: Character int
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *list = *head, *node;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(list);
		return (1);
	}

	while (i < index)
	{
		node = list;
		if (list->next == NULL)
			return (-1);
		list = list->next;
		i++;
	}

	node->next = list->next;
	if (node->next != NULL)
		node->next->prev = node;
	free(list);

	return (1);
}
