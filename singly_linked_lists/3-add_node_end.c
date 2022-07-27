#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* add_node - adds a new node at the beginning of a list_t
* @head: Character list_t pointer
* @str: Character char pointer
* Return: element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *element, *new;
	int i = 0;

	element = malloc(sizeof(list_t));

	if (element == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		
		element->str = strdup(str);
	element->len = i;
	element->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		new = *head;
		while (new->next)
			new = new->next;
		new->next = element;
	}
	return (element);
}
