#include "main.h"
/**
* print_alphabet_x10 - alphabet
*
* Return: 0
*/
void print_alphabet_x10(void)
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
