#include <stdio.h>
/**
 * main - entry point
 * Descripiton: print lower case excpet q and e
 * Return: 0 success
 */
int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		if (chr == 'e')
		{
			chr++
			continue;
		}
		else if (chr == 'q')
		{
			chr++
			continue;
		}
		putchar(chr);
		chr++;
	}
	return (0);
}
