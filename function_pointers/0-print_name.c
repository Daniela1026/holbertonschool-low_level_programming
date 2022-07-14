#include <stddef.h>
#include "function_pointers.h"

/**
* print_name - That prints name
* @name: Character char
* @f: Character void
* Return: Always 0.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || *name != '\0' || f != NULL)
		(f)(name);
}
