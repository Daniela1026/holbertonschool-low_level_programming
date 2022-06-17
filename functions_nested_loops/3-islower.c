#include "main.h"
/**
* _islower - if c is a letter
*
* c - int
*
* Return: 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
			else
				return (0);
}
