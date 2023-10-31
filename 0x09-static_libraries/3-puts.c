#include "main.h"
/**
 * _puts - fcnt that prints a string
 * @str: input
 */
void _puts(char *str)
{
	int size = 0;

	while (str[size] != 0)
	{
		_putchar (str[size]);

		size++;
	} _putchar ('\n');
}
