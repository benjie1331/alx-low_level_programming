#include "main.h"
/**
 * print_line - function that draws a line
 * Description: function that draws a line
 * @n: input
 */
void print_line(int n)
{
	int count;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		} _putchar('\n');
	}


}
