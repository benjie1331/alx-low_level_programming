#include "main.h"
/*
 * _islower - function that checks if char is lowerchase
 * Description: function that prints lowercase only
 * Return: 1 if lower, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
