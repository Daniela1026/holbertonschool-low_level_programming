#include <stdio.h>

/**
* main - alphabet
*
* Return: 0
*/
/*putchar*/

int main(void)
{
	
	char alf = 'a';
	/*char*/
	while (alf <= 'z')
	{
		putchar(alf);
		alf++;
	}
	putchar('\n');
	return (0);
}
