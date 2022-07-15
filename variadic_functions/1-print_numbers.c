#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - Numbers printed separator
* @n: Character unsigned int
* @separator: Character char
*
* Return: Always 0.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sep;
	unsigned int i;

	va_start(sep, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(sep, unsigned int));
		if (i != (n - 1) && separator != 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(sep);
}
