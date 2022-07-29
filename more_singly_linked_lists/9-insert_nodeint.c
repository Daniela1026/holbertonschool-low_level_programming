#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts a new node
* at a given position
* @head: Character listint_t pointer
* @idx: Character unsigned int
* @n: Character int
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *list;
	unsigned int i;

	if (head == NULL)
		return (0);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (0);

	newnode->n = n;
	list =*head;
	if (*head == NULL && idx != 0)
		return (0);

	else if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	else if (idx == 1)
	{
		newnode->next = (*head)->next;
		(*head)->next = newnode;
		return (newnode);
	}

	while (i < (idx - 1))
	{
		list = list->next;
		i++;
		if (!list)
		{
			free(newnode);
			return (0);
		}
	}
	newnode->next = list->next;
	list->next = newnode;

	return (newnode);
}
