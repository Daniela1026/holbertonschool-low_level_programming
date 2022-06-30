#include "main.h"
/**
* _memcpy - copies memory area
* @dest: Character char
* @src: Character char
* @n: Character n
*
* Return: 1 and 0
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s);
		else if (*(s + i) == c)
			return (s + i);
	s++;
	return (s + i);
}
