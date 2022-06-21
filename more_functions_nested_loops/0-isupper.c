#include "main.h"
/**
* _isupper - uppercase and otherwise character
* @c: Character int
*
* Return: 1 and 0
*/

int _isupper(int c)
{
	if (c <= 'a' && c <= 'A')
		return (1);
	return (0);
}
