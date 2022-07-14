#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - returns sum of a and b
* @a: Character int
* @b: Character int
* Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - returns rest of a and b
* @a: Character int
* @b: Character int
* Return: rest
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - returns multp of a and b
* @a: Character int
* @b: Character int
* Return: mult
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - returns div of a and b
* @a: Character int
* @b: Character int
* Return: div
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - returns mod of a and b
* @a: Character int
* @b: Character int
* Return: mod
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
