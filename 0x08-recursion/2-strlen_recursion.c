#include "main.h"
/**
 * _strlen_recursion - fcn that returns the length of sting
 * @s: input
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (*s)
	{
	n++;
	n += _strlen_recursion(s + 1);

	}
	return (n);
}
