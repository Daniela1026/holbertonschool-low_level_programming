#include "main.h"
/**
* rev_string - reverse
* @s: Character char
*
*/
void rev_string(char *s)
{
	int l, r = 0;
	int m, c;

	while (s[l] != '\0')
		l++;

	for (m = l - 1; r > m; r++)
	{
		c = s[r];
		s[r] = s[m];
		s[m] = c;
		m--;

	}
}	
