#include "main.h"
/**
* _strlen - lenght of a string
* @s: Character char
*
* Return: 1 and 0
*/
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
