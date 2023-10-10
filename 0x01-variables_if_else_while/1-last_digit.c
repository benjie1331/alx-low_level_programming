#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry Point for this porgram
 * Description: print the last digit of the assigned value of 'n'
 * Return: 0 is success
 */
int main(void)
{
	 int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int x = n % 10;

	if (x < 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, x);
	}
	else if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, x);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, x);
	}
	else
	{
		return (0);
	}
	return (0);
