#include "main.h"
/**
 * puts2 - fctn that prints every other char
 * @str: input
 */
void puts2(char *str)
{
	int i = 0;

	int j;

	while (str[i] != 0)
		i++;
	i--;

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	} _putchar('\n');
}
