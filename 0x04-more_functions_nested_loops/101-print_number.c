#include "main.h"
/**
 *  print_number - function that prints integer
 *  Description: function that prints integer
 * @n: input
 */
void print_number(int n)
{
	unsigned int j = n;

	if (j < 0)
	{
		_putchar('-');
		j = -j;	
	}

	if ((j / 10 ) > 0)
		print_number(j / 10);
	
	_putchar((j % 10) + 48);
	

}
