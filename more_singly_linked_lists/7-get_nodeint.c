#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node of a
* listint_t linked list
* @head: Character listint_t pointer
* @index: character unsigned int
*
* Return: NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (!head)
		return (0);
	while (head)
	{
		if (index == node)
			return (head);
		node++;
		head = head->next;
	}
	return (0);
}
