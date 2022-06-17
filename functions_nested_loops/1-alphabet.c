#include "main.h"
/**
* print_alphabet - alph a and z 
*
* Return: 0
*/

void print_alphabet(void)
{
	char alf = 'a';

	while (alf <= 'z')
	{
		_putchar(alf);
		alf++;
	}
	_putchar('\n');
}
