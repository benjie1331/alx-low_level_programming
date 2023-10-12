#include<stdio.h>
/**
 * positive_or_negative - function to test sign
 * @n: input
 * Description: 'n' is positive or nigative or 0
 * Return: 0 is success
 */
int positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
