#include "main.h"
#include <stdio.h>
/**
* _strcpy - print string pointed
* @dest: Character int
* @src: Character int
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
