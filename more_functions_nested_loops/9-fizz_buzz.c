#include "main.h"
#include <stdio.h>
/**
* main - fizz fizzbuzz buzz
* Return: 0
*/
int main(void)
{
	int f;

	for (f = 1; f < 100; f++)
	{
		if (f % 3 == 0 && f % 5 == 0)
			printf("FizzBuzz ");
		else if (f % 3 == 0)
			printf("Fizz ");
		else if (f % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", f);
	}
	printf("Buzz\n");
	return (0);
}
