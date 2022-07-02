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
	if (n * n == i)
		return (i);
	if (n * n > i)
		return (-1);
	return (func(n + 1, i));
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

