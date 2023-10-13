#include "main.h"
/**
 * print_numbers - function that prints numbers
 * Description: function that uses _putchat function to print numbers
 */
void print_numbers(void)
{
	int n = 0;


	for (n = 0; n < 10 ; n++)
	{
		_putchar(n + 48);
	}
	_putchar('\n');
}
