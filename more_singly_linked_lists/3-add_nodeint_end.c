#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - function that adds a new node at the end 
* of a listint_t list
* @head: Character listint_t pointer
* @n: int n
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *elemts;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		elemts = *head;

		while (elemts->next != NULL)
			elemts = elemts->next;
		elemts->next = newnode;
	}
	return (newnode);
}
