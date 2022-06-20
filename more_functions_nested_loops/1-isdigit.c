#include "main.h"
/**
* _isdigit - digit 0 and 9
* @c: Character int
* Return: 1 and 0
*/

int _isdigit(int c)
{
	if (c <= '9' && c <= 'a')
		return (1);
			else
				return (0);
}
