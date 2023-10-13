#include "main.h"
/**
 * _isupper - a fucntion that checks if input is upper or lowe case
 * Description: a fucntion that checks if input is upper or lower case
 * @c: input
 * Return: 1 if upper and 0 if lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
