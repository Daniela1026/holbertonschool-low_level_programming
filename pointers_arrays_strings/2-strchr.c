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
	for (; *s != '\0'; s++)
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
			return (s + 1);
	s++;
	return (s + 1);
}
