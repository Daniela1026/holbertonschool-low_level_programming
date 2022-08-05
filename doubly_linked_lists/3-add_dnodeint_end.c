#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* add_dnodeint_end - function that adds a new node
* at the end of a dlistint_t list.
* @head: Character Pointer
* @n: Character int
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *newnode;

	if (!head)
		return (0);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (0);
	newnode->n = n;
	newnode->next = NULL;
	if (!(*head))
	{
		*head = newnode;
		newnode->prev = NULL;
	}
	else
	{
		node = *head;
		while (node->next)
		{
			node = node->next;
		}
		node->next = newnode;
		newnode->prev = node;
	}

	return (newnode);
}
