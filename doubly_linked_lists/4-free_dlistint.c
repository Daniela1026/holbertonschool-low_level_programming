#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* free_dlistint - function that frees a dlistint_t list
* @head: Character Pointer
* Return: head
*/
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
