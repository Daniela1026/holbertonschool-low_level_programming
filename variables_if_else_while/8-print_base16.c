#include<stdio.h>
/**
*main - numbers putchar
*
* Return: 0
*/

int main(void)
{
	int n = '0';
	char low = 'a';

	while (n <= '9')
	{
	putchar(n);
	n++;
	}
	while (low <= 'f')
	{
		putchar(low);
		low++;
	}

	putchar('\n');

	return (0);
}
