#include "main.h"
/**
* _strchr - locates a character in a string
* @s: Character char
* @c: Character char
*
* Return: 1 and 0
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int n = 0;
	int b;

	while (s[i] != '\0')
	{
		while (accept[n] != '\0')
		{
			if (s[i] == accept[n])
			{
				b++;
				break;
			}
			n++;
		}
		if (accept[n] == '\0')
			break;
		i++;
	}
	return (b);
}
