#include "main.h"
/**
* _strchr - locates a character in a string
* @s: Character char
* @c: Character char
*
* Return: 1 and 0
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack != '\0')
	{
		for (i = 0; *haystack == *needle && *haystack != '\0' && *needle != '\0'; haystack++)
			needle++, i++;
		if (*needle == '\0')
			return (haystack - i);
		haystack -= (i - 1),needle -= i;
	}
	return ('\0');
}
