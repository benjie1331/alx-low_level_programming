#include "main.h"
/**
 * puts_half - fcn that prints half a string
 * @str: input
 */
void puts_half(char *str)
{
	int i = 0;

	int j;

	while (str[i] != 0)
	i++;

	i--;

	if (i % 2 == 0)
	{
		for (j = i / 2; j <= i; j++)
		{
			_putchar(str[j+1]);
		} _putchar('\n');
	}
	else if (i % 2 != 0)
	{
		i--;

		for (j = i / 2; j <= i; j++)
		{
			_putchar(str[j+1]);
		} _putchar('\n');
	}
}
