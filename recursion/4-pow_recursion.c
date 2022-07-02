#include "main.h"
/**
* _pow_recursion - raised to the power
* @x: Character int
* @y: Character int
* Return: _pow_recursion
*
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y <= 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
