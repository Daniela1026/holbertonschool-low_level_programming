#include "main.h"
/**
* _strchr - locates a character in a string
* @s: Character char
* @c: Character char
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
	return (s);
}
