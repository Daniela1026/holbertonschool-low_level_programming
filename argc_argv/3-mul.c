#include <stdio.h>
#include <stdlib.h>

/**
* main - prints program
* @argc: Character int
* @argv: Character char
* Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", i);
	}
	return (0);
}
