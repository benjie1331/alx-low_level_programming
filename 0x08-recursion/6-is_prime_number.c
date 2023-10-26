#include "main.h"
/**
 * is_prime_number - fcn that returns 1 if the input is prime
 * @n: input
 * @j: input
 * Return: int
 */

int real_prime(int n, int j);

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - fcn that returs prime
 * @n: input
 * @j: input
 * Return: int
 */

int real_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0)
		return (0);

		return (real_prime(n, j - 1));
}
