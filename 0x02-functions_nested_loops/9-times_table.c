#include "main.h"
/**
 * times_table - Function that prints the timetables
 * Description: Function that prints the time tables
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		k = i * j;
		if (j > 0)
		{
			_putchar(',');
			_putchar(' ');
		}

		if (k <= 9)
		{
			_putchar(' ');
			_putchar(k + '0');
		}
		else
		{	_putchar((k / 10) + 48);
			_putchar((k % 10) + 48);
		}
		}
		_putchar('\n');
	}
}
