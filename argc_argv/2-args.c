#include <stdio.h>

/**
* main - prints program
* @argc: Character int
* @argv: Character char
* Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;
	
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
