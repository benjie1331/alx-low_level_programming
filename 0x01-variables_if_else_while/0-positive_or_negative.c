#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry Point for this porgram
 * Description: 'n' is positive or nigative or 0
 * Return: 0 is success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(" %d is postive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("is zero");
	return (0);
}
