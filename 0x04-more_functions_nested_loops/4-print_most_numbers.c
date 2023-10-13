#include "main.h"
/**
 * print_most_numbers - function that prints specific numbers
 * Descrrption: function that prints 0 to 9 excluding 2 and 4
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2)
		{
			continue;
		}
		else if (n == 4)
		{
			continue;
		}
		_putchar(n + 48);

	} _putchar('\n');
}
