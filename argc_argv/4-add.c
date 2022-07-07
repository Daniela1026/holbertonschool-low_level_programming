#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - prints program
* @argc: Character int
* @argv: Character char
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, x = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		x += atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}

