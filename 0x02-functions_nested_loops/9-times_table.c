#include "main.h"
/**
 * times_table - Function that prints the timetables
 * Description: Function that prints the time tables
 */

void times_table(void)
{
	int i, j, k;

	for (i = 1; i <= 9; i++)
	{
		_putchar('0');
		for (j = 0; j < 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = i * j;

			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + 48);
			_putchar((k % 10) + 48);

		}
		_putchar('\n');

	}
}
