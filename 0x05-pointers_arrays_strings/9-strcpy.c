#include "main.h"
/**
 * *_strcpy - fcn that copies the string
 * @dest: input
 * @src: input
 * Return: char pointer
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != 0; count++)
	{
		*dest = *src;

		dest++;

		src--;
	}

	dest[count] = '\0';

	return (dest);
}
