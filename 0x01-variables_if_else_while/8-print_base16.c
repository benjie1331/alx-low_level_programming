#include <stdio.h>
/**
 * main - entry point
 * Description: prints base 16 numbers in lower case
 * Return: 0 success
 */
int main(void)
{
	int n = 48;

	while (n <= 102)
	{
		putchar(n);
		n++;
		if (n == 58)
		{
			n += 39;
		}
	}
	putchar('\n');

	return (0);
}
