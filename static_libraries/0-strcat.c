#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: Character char
* @src: Character char
*
* Return: 1 and 0
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int a;

	while (dest[i] != '\0')
		i++;
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
