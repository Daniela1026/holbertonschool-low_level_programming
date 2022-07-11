#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - The concatenates two strings
* @n: Character int
* @s1: Character char
* @s2: Character char
* Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s, a;
	char *s3;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	i = 0;
	while (s1[i])
	{
		i++;
	}

	s3 = malloc(sizeof(*s3) * i + n + 1);

	if (s3 == NULL)
		return (NULL);

	for (s = 0, a = 0; s < (i + n); s++)
	{
		if (s < i)
		{
			s3[s] = s1[s];
		}
		else
		{
			s3[s] = s2[a++];
		}
	}
	s3[s] = '\0';
	return (s3);
}
