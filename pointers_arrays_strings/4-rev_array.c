#include "main.h"
/**
* _strncpy - function that copies a string
* @dest: Character char
* @src: Character char
* @n: Character int
*
* Return: dest
*/
void reverse_array(int *a, int n)
{
	int i, c;

	i = c =  0;
	n -= 1;
	while (i <= n)
	{
		c = a[n];
		a[n--] = a[i];
		a[i++] = c;
	}
}
