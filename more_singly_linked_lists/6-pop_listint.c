#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - function that deletes the head node of a
* listint_t linked list
* @head: Character listint_t pointer
*
* Return: the head node’s data
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	node = (*head)->next;
	(*head)->next = 0;
	free(*head);
	*head = node;
	return (data);
}
