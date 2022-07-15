#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - strings new line
* @n: Character unsigned int
* @separator: Character char
*
* Return: Always 0.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sep;
	char *s;
	unsigned int i;

	va_start(sep, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(sep, char *);
		if (s == 0)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != 0)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(sep);
}
