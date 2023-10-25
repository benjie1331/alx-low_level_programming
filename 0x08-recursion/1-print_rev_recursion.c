#include "main.h"
/**
 * _print_rev_recursion - fcn that prints a string in revrse
 * @s: input
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recusrion(s + 1);
		_putchar (*s);
	}

}

