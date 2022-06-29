#include "main.h"
/**
* _strncpy - function that copies a string
* @dest: Character char
* @src: Character char
* @n: Character int
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
