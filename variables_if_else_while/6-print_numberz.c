#include<stdio.h>
/**
*main - numbers putchar
*
* Return: 0
*/

int main(void)
{
	char n = '0';
	
	while (n <= '9')
	{
	putchar(n);
	n++;
	}
	
	putchar('\n');

	return (0);
}
