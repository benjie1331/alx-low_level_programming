#include "main.h"
/**
 * _strlen - fcn that retunres length of string
 * @s: input
 * Return: length of string
 */
int _strlen(char *s)
{

	int size = 0;

	while (s[size] != 0)
		size++;

	return (size);
}
