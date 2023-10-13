#include "main.h"
/**
 *  print_diagonal - function to print diagonal line
 *  Description: Funtion that prints diagonal line
 * @n: input
 */
void print_diagonal(int n)
{
	int count;

	int count2;

	if (n <= 0)
	_putchar('\n');
	else
	{
		for (count = 0; count < n; count++)
		{

		for (count2 = 0; count2 < count; count2++)
		{
			_putchar(32);
		}

		_putchar(92);

		_putchar('\n');

		} _putchar('\n');
	}


}
