#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* *get_dnodeint_at_index - function that returns the
* nth node of a dlistint_t linked list.
* @head: Character Pointer
* @index: Character int
* Return: return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth = head;
	unsigned int node;

	if (head)
	{
		for (node = 0; nth; node++)
		{
			if (node == index)
			{
			return (nth);
			}
		nth = nth->next;
		}
	}
return (0);
}
