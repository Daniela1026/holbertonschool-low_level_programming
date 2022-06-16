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

		if (n <= '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		n++;
	}
	return (0);
}
