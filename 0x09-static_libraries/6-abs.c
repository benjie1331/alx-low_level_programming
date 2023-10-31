#include "main.h"
/**
 * _abs - a fucntion that prints absloute value
 * Description: function that prints absloute value
 * @n: input
 * Return: number if positive or number * (-1) if negative
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n = (-1) * n);
}
