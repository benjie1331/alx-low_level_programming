#include "main.h"
/**
 * *_memcpy - fcn that copies memory data
 * @dest: input
 * @src: input
 * @n: input
 * Return: pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
