#include <stdio.h>
/**
 * main - entry point
 * Description: function to print numbers
 * Return: 0 succes
 */
int main(void)
{

	int n = 0;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf(" Fizz");
			continue;
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf(" %d ", n);
	}


	return (0);
}
