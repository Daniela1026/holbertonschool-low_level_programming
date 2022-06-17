#include "main.h"
/**
* print_alphabetx10 - alph a and z x10
*
* Return: 0
*/

void print_alphabetx10(void)
{
	int c = 0;
	char alf;

	while (c <= 9)
	{
		for (alf = 'a'; alf <= 'z'; alf++)
		{
			_putchar(alf);
		}
		c++;
		_putchar('\n');
	}
}
