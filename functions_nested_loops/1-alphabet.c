#include "main.h"
/**
* main - alphabet lowercase
*
* Return: 0
*/
/**
* print_alphabet (void) alph a and z
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
