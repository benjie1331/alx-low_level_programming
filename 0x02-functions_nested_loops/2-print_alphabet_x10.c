#include "main.h"
/**
 * print_alphabet_x10 - fcn that prints alphabet
 * Description: function with _putchar function for printing alphabet
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int n, ch;

	for (n = 0; n <= 9; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}

}
