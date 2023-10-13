#include "main.h"
/**
 * more_numbers - a function that prints 10x numbers from 10 - 14
 * Description: function that prints numbers 10 -14 10x
 */
void more_numbers(void)
{
	int n = 0;

	int counter = 0;

	int counter2;

	for (counter = 0; counter < 10; counter++)
	{
		for (n = 0; n < 15; n++)
	{
		counter2 = n;
		if (n > 9)
		{
			_putchar(1 + 48);
			counter2 = n % 10;



		}
		_putchar(counter2 + 48);

	} _putchar('\n');
	}
}
