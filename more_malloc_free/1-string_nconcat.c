#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* *create_array -create array of chars
* @size: Character int
* @c: Character char
* Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s, a;
	char *s3;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";
	
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (s = 0; s2[s] != '\0'; s++)
	{
	}
	if (n < s)
		s = n;
	
	s3 = malloc(sizeof(char) * (i + s + 1));
	
	if (s3 == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		{
			s3[a] = s1[a];
		}
	for (a = 0; a < s; a++)
		{
			s3[a + i] = s2[a];
		}
	s3[i + s] = '\0';
	return (s3);
}
