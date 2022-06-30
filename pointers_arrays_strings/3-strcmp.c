#include "main.h"
/**
* _strncpy - function that copies a string
* @dest: Character char
* @src: Character char
* @n: Character int
*
* Return: dest
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	
	return (s1[i] - s2[i]);
}
