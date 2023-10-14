#include "main.h"
/**
 * print_triangle - function that prints triangles
 * Description: function that prints triangles
 * @size: input
 */
void print_triangle(int size)
{
	int n, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((n + j) <= size)
					_putchar(' ');
				else
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
