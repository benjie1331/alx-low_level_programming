#include "main.h"
/**
 * *_strcpy - fcn that copies the string
 * @dest: input
 * @src: input
 * Return: char pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *og = dest;

	while (*src != 0)
	{
		*dest = *src;

		dest++;

		src--;
	}

	*dest = '\0';

	return (og);
}
