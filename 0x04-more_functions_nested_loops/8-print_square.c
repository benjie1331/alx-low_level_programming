#include "main.h"
/**
 * print_square - function that prints a square
 * Description: function that prints a square
 * @size: input
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0 ; i < size; i++)
		{
			_putchar('#');
		} _putchar('\n');

		}
	}
}
