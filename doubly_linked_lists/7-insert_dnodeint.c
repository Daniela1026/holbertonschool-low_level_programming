#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* insert_dnodeint_at_index - function that inserts
* a new node at a given position
* @h: Character Pointer
* @idx: Character int
* @n: Character int
* Return: return NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *list = *h, *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*h == NULL)
	{
		*h = newnode;
		newnode->next = NULL;
		newnode->prev = NULL;
		return (newnode);
	}
	else if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	while (i < (idx - 1))
	{
		if (list->next == NULL)
			return (NULL);
		list = list->next;
		i++;
	}

	newnode->prev = list;
	newnode->next = list->next;
	list->next = newnode;
	if (newnode->next != NULL)
		newnode->next->prev = newnode;
	return (newnode);
}
