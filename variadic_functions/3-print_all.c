#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - Numbers printed separator
* @format: Character unsigned int
*
* Return: Always 0.
*/
void print_all(const char * const format, ...)
{
	va_list form;
	int i = 0, n;
	char *s;

	va_start(form, format);
	while (format && format[i] != '\0')
	{
		n = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(form, int));
				break;
			case 'i':
				printf("%i", va_arg(form, int));
				break;
			case 'f':
				printf("%f", va_arg(form, double));
				break;
			case 's':
				s = va_arg(form, char *);
				if (s)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
			default:
				n = 0;
				break;
		}
		if (format[i + 1] != '\0' && n == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(form);
}
