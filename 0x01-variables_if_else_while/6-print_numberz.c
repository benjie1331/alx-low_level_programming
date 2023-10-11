#include <stdio.h>
/**
 * main - entry point
 * Description: prints single number using putchar
 * Return: 0 sucess
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
