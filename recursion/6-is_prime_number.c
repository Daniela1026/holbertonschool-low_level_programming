#include "main.h"
/**
* prime - input integer is a prime number
* @n: Character int
* @i: Character int
* Return: prime
*
*/
int prime(int n, int i)
{
	if (i % n == 0 || i < 2)
		return (0);
	else if (n == i - 1)
		return (1);
	else if (i > n)
		return (prime(n + 1, i));
	return (1);
}
/**
* is_prime_number - input integer is a prime number
* @n: Character int
* Return: is_prime_number
*/
int is_prime_number(int n)
{
	return (prime(2, n));
}
