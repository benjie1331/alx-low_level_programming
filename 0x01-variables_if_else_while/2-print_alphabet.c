#include <stdio.h>
/**
 * main - entry point
 * Description: A fucntion that prints lowercase alphabet
 * Return: 0 success
 */
int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}
	putchar('\n');

	return (0);
}
