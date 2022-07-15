#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - Returns the summ of all parameters
* @n: Character unsigned int
*
* Return: Always 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	int sum;
	unsigned int r;

	va_start(s, n);
	if (n == 0)
		return (0);

	r = 0;
	while (r < n)
	{
		sum += va_arg(s, const unsigned int);
		r++;
	}

	va_end(s);

	return (sum);
}
