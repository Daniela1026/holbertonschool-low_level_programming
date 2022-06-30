#include "main.h"
/**
* _memset - memory constant byte
* @s: Character char
* @b: Character char
* @n: Character int
*
* Return: 1 and 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	n--;
	return(s);
}
