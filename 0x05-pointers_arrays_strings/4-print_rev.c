#include "main.h"
/**
 * print_rev - fcn that prints a string in revesrse
 * @s: input
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	i++;

	while (i != -1)
	{
		_putchar(s[i]);
		i--;
	} _putchar('\n');
}
