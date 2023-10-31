#include "main.h"
/**
 * *_memset - fcn that fills memory with constant
 * @s: input
 * @b: input
 * @n: input
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
