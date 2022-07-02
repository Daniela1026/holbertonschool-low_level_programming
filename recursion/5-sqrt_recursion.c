#include "main.h"
/**
* func - returns the natural square root of a number
* @n: Character int
* @i: Character int
* Return: func
*
*/
int func(int n, int i)
{
	int r;
	r = n * n;
	if (r == i)
		return (n);
	if (r < i)
		return (func(n + 1, i));
	else
		return (-1);
}
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: Character int
* Return: func
*/
int _sqrt_recursion(int n)
{
	return (func(n, 1));
}
