#include "main.h"
/**
* rev_string - reverse
* @s: Character char
*
*/
void rev_string(char *s)
{
	int l = 0;
	int r;
	int m;
	int c;
	
	while (s[l] != 0)
	{
		l++;
	}

	c = l;
	l = 0;
	r = c - 1;

	while (l < r)
	{
		m = s[l];
		s[l] = s[r];
		s[r] = m;
		l++;
		r--;
	}
}
