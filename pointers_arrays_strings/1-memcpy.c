#include "main.h"
/**
* _memcpy - copies memory area
* @dest: Character char
* @src: Character char
* @n: Character n
*
* Return: 1 and 0
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	n--;
	return (dest);
}
