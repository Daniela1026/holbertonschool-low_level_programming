#include <stdio.h>

/**
* main - alphabet
*
* Return: 0
*/
/*putchar*/

int main(void)
{
	char alf = 'z';
	/*char*/
	while (alf >= 'a')
	{
		putchar(alf);
		alf--;
	}
	putchar('\n');
	return (0);
}
