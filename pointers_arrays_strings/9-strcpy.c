#include "main.h"
#include <stdio.h>
/**
* print_array - print n elements of an array of integers
* @a: Character int
* @n: Character int
*
* Return: 1 and 0
*/
char *_strcpy(char *dest, char *src)
{
	int s;

	for (s = 0; src[s] != '\0'; s++)
	{
	dest[s] = src[s];
	}
dest[s] = '\0';

return (dest);
}
