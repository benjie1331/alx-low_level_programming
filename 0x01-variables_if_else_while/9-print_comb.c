#include <stdio.h>
/**
 * main - entry point
 * Description: program that prints all possible combos of single numbers
 * Return: 0 success
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
		putchar(',');
		putchar(' ');
		n++;
	}

	return (0);
}
