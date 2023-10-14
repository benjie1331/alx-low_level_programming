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
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else

		printf("%d", n);

		if (n != 100)
			printf(" ");
		else
		printf("\n");

	}


	return (0);
}
