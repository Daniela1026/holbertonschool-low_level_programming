#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - newly allocated space in memory
*
* @str: Character char
*
* Return: 0
*/
char *_strdup(char *str)
{
	int i;
	char *n;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i])
		i++;

	n = malloc(sizeof(char) * (i + 1));
	if (n == NULL)
	{
		return (NULL);
		n[i] = '\0';
	}
	while (i--)
	{
		n[i] = str[i];
	}
	return (n);
}
