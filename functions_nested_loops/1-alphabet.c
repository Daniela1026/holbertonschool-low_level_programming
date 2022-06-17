#include "main.h"
/**
* main - alphabet lowercase
*
* print_alphabet _putchar
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
