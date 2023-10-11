#include "main.h"
/**
 * print_sign - prints sign of n
 * @n: input
 * Description: prints sign of the number
 * Return: 1 if positive, -1 if negative and 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
