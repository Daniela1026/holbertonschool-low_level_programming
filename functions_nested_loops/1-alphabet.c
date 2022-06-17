#include "main.h"
/**
* main - alphabet lowercase
*
* Return: 0
*/
/* void print_alphabet (void) alphabet a and z*/
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
