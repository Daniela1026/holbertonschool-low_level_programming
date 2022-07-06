#include <stdio.h>

/**
* main - prints program
* @argc: Character int
* @argv: Character char
* Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
