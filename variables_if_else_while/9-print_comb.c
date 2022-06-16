#include <stdio.h>

/**
* main - Numbers must be separated by ,,
*
* Return: 0
*/

int main(void)
{
	int i = '0';
	while (i <= '9')
	{
		putchar(i);
		
		if (i == '9')
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		
		i++;
	}
	return (0);
}
