#include "main.h"
/**
* _strchr - locates a character in a string
* @s: Character char
* @c: Character char
*
* Return: 1 and 0
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
