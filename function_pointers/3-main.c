#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
* main - simple operations
* @argc: Character int
* @argv: Character char
* Return: Always 0.
*/
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int result;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	switch (argv[2][0])
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
			result = (*get_op_func(argv[2]))(num1, num2);
			printf("%d\n", result);
			break;
		default:
			printf("Error\n");
			exit(99);
	}
	return (0);
}
