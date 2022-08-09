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
	if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);
	return (func(n, (i + 1)));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: Character int
* Return: func
*/
int _sqrt_recursion(int n)
{
	int l = 1, s;

	s = func(n, l);
	return (s);
}
