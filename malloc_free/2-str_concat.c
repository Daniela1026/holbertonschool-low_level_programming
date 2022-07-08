#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - newly allocated space in memory
*
* @str: Character char
*
* Return: 0
*/
char *str_concat(char *s1, char *s2)
{
	int i, n, s;
	char *s3 = NULL;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";
	
	for (i = 0; s1[i]; i++)
	{

	}
	for (n = 0; s2[n]; n++)
	{

	}
	
	s3 = malloc(sizeof(char) * (i + n + 1));

	if (s3 == NULL)
		return (NULL);
	
	 for (s = 0; s1 && s1[s]; s++)
                s3[s] = s1[s];
        s3[s] = '\0';

        for (s = 0; s2 && s2[s]; s++)
                s3[i + s] = s2[s];
        s3[i + s] = '\0';

	return (s3);
}
