#include<stdio.h>

/**
* main - alphabet
*
* Return: 0
*/
/*putchar*/
int main(void)
{
	char l = 'a';
	while (l <= 'z')
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
		l++;
	}
	
	putchar('\n');
	
	return (0);
}
