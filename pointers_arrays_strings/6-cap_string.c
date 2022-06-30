#include "main.h"
/**
* cap_string - space, tabulation, new line
* @n: Character char
*
* Return: n
*/
char *cap_string(char *n)
{
	int i = 1;
	int l;
	char str[] = {',' , ';', '.', '?', '"','(', ')', '{', '}', ' ', '\n', '\t'};

	if (n[0] >= 'a' && n[0] <= 'z')
		n[0] -= ('a' - 'A');
	while (n[i] != '\0')
	{
		for (l = 0; str[l] != '\0'; l++)
			if (n[i - 1] == str[l] && (n[i] >= 'a' && n[i] <= 'z'))
				n[i] -= ('a' - 'A');
		i++;
	}
	return (n);
}
