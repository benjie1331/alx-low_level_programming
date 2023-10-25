#include "main.h"
/**
 * factorial - fcn that returns factorial
 * @n: input
 * Return: input
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
