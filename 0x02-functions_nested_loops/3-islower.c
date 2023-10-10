#include "main.h"
/**
 * _islower - function that prints lowercase
 * @c: input char
 * Description: function to print lowercase
 * Return: 1 if  lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
