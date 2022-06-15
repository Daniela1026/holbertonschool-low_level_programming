#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - last digit
 *
 * Return: o
 */
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	int n;
	int d;
	char last[] = "Last digit of";
	/*char*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	printf("%s %d is %d and ", last, n, d);

	if (d > 5)
	{
	printf("is greater than 5\n");
	}
	else if (d == 0)
	{
		printf("is 0\n");
	}
	else
	{
		printf("is less than 6 and not 0\n");
	}
	return (0);
}
