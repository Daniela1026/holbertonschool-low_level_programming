#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* add_node - adds a new node at the beginning of a list_t
* @head: Character list_t pointer
* @str: Character char pointer
* Return: element
*/
int _element(const char *str)
{
	int n;
	for (n = 0; str[n] != '\0'; n++)
		;
	return (n);
}

/**                                                                                                                                                                          
 *
 * add_node - adds a new node at the beginning of a list_t
 * @head: Character list_t pointer
 * @str: Character char pointer
 * Return: element
 * 
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *element, *new;
	
	new = *head;
	element = malloc(sizeof(list_t));
	if (str == NULL)
		return (NULL);
	
	element->str = strdup(str);
	element->len = _element(str);
	element->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (new->next != NULL)
				new = new->next;
			new->next = element;
		}
		return (element);
	}
