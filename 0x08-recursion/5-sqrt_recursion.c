#include "main.h"
/**
 * _sqrt_recursion - fcn that returns the sqrt of a number
 * @n: input
 * @num: input
 * Return: int
 */
int sqrtt(int n, int num);

int _sqrt_recursion(int n)
{
	return (sqrtt(n, 1));
}

/**
 * sqrtt - fcn that returns sqre root
 * @num: input
 * @n: input
 * Return: int
 */

int sqrtt(int n, int num)
{
	if (num * num == n)
	return (num);

	else if (num * num < n)
	{
	return (sqrtt(n, num + 1));
	}
	else
	return (-1);
}
