#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* sum_dlistint - function that returns the sum of all
* the data (n) of a dlistint_t linked list
* @head: Character Pointer
* Return: 0
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *data = head;
	int sum = 0;

	if (head)
	{
		while (data)
		{
			sum += data->n;
			data = data->next;
		}
	}
	return (sum);
}

