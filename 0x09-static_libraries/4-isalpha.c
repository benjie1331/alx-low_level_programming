#include "main.h"
/**
 * _isalpha - function
 * @c:  input
 * Description: function returns 1 if alphabet
 * Return: 1 if true, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
