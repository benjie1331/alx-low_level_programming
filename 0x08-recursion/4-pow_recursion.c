#include "main.h"
/**
 * _pow_recursion - fcn that returns the value of x rasied by the power of y
 * @x: input
 * @y: input
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(int x, int (y - 1)));
}
