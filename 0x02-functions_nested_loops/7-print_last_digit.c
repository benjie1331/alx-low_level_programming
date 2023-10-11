#include "main.h"
/**
 * print_last_digit - a function that prints the last digit
 * Description: A function that prints the last digit
 * @n: input
 * Return: LastDigit
 */
int print_last_digit(int n)
{
	int LastDigit;

	if (n < 0)
	LastDigit = -1 * (n % 10);

	else
	LastDigit = n % 10;

	_putchar(LastDigit + '0');
	return (LastDigit);
}
