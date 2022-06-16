#include<stdio.h>
/**
* main - numbers must be separated ,
*
* Return: 0
*/

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;

		if (n <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
