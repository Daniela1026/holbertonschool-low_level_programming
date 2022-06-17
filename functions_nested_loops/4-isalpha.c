#include "main.h"
/**
* _isalpha - low upp alphabetic
* @c: character lowercase uppercase
*
* Return: 1 : 0
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}
