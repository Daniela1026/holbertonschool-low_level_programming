#include "main.h"
/**
* reverse_array - reverses integers
* @a: Character int
* @n: Character int
*
* Return: dest
*/
char *string_toupper(char *l)
{
	int u = 0;

	while (l[u] != '\0')
	{
	if(l[u] >= 'a' && l[u] <= 'z')
		l[u] -= 'a' - 'A';
	u++;
	}
	return (l);
}
