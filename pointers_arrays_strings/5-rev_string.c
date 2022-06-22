#include "main.h"
/**
* rev_string - reverse
* @s: Character char
*
*/
void rev_string(char *s)
{
	int l, r = 0;
	char tmp;

	while (s[r++])
		l++;

	for (r = l - 1; r >= l / 2; r--)
	{
		tmp = s[r];
		s[r] = s[l - r - 1];
		s[l - r - 1] = tmp;
	}
}	
