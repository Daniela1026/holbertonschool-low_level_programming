#include "main.h"
#include <stddef.h>

/**
* print-binary - function that prints the binary representation
* of a number
* @n: Character int 
* Return: Always 0.
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
