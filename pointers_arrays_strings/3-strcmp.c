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
        int c = 0;

        while (s1[c] != '\0' || s2[c] != '\0')
                c++;
        if (s1[c] != s2[c])
	{
		return (s1[c] - s2[c]);
	}
	return (0);
}
