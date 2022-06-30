#include "main.h"
/**
* _strstr - locates substring
* @haystack: Character char
* @needle: Character char
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
		haystack -= (i - 1), needle -= i;
	}
	return ('\0');
}
