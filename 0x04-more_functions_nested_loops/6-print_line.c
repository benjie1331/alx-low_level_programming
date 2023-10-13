#include "main.h"
/**
 * print_line - function that draws a line
 * Description: function that draws a line
 * @n: input
 */
void print_line(int n)
{

	if (n <= 0)
		_putchar('\n');
	else
	{
		do {
			_putchar('_');
			n--;

		} while (n != 0 && n > 0);

	}


}
