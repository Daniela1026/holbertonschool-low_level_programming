#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list_t
* @head: Character list_t pointer
* @str: Character char pointer
* Return: element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *element;
	int i = 0;

	element = malloc(sizeof(list_t));

	if (element == NULL)
		return (NULL);

	for (; str[i]; i++)

		element->str = strdup(str);
	element->len = i;
	element->next = *head;
	*head = element;
	return (element);
}
