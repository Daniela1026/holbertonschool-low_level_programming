#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* add_dnodeint - function that adds a new node
* at the beginning of a dlistint_t list.
* @head: Character Pointer
* @n: Character int
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *newnode = NULL;

	if (head == NULL)
	return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;

	node = *head;
	*head = newnode;
	newnode->next = node;

	if (node != NULL)
		node->prev = *head;

	return (newnode);
}
