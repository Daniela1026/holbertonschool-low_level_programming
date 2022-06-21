#include "main.h"
/**
* _isupper - uppercase and otherwise character
* @c: Character int
*
* Return: 1 and 0
*/

int _isupper(int c)
{
	if (c <= 'A' && c <= 'a')
		return (1);
	return (0);
}
