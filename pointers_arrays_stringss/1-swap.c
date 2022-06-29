#include "main.h"
/**
* swap_int - values *a and *b
* @a: Character int
* @b: Character int
*
* Return: 1 and 0
*/
void swap_int(int *a, int *b)
{
	int values = *a;

	*a = *b;
	*b = values;
}
