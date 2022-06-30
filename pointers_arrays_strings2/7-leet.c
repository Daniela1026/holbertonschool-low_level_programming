#include "main.h"
/**
* leet - encodes into
* @l: Character char
*
* Return: dest
*/
char *leet(char *l)
{
	int i = 0;
	int n;
	char let[] = "aAeEoOtTlL";
	char num[] = "43071";

	for (i = 0; l[i] != '\0'; i++)
	{
		for (n = 0; let[n] != '\0'; n++)
			if (l[i] == let[n])
				l[i] = num[n / 2];
	}
	return (l);
}
