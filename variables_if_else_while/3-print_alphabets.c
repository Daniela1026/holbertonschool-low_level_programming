#include <stdio.h>

/**
* main - alphabet
*
* Return: 0
*/
/*putchar*/

int main(void)
{
	char low = 'a';
	char upp = 'A';
	/*char*/
	while (low <= 'z')
	{
		putchar(low);
	low++;
	}
	while (upp <= 'Z')
	{
		putchar(upp);
	upp++;
	}

	putchar('\n');
	return (0);
}
