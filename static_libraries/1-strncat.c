#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: Character char
* @src: Character char
* @n: Character n
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int a;

	while (dest[i] != '\0')
		i++;
	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
