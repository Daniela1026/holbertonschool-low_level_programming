#include "main.h"
/**
* main - alphabet lowercase
*
* Return: 0
*/
/* print_alphabet _putchar*/
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
