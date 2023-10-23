#include "main.h"
/**
 * *_strncat - fcn that concatenates 2 strings
 * @dest: input
 * @src: input
 * @n: input
 * Return: char poninter
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int k, count;

	count = 0;

	k = n;

	while (dest[i] != 0)
		i++;

	while (src[count] != '\0' && k != 0)
	{
		dest[i + count] = src[count];

		count++;
		k--;
	}
	dest[i + count] = '\0';

	return (dest);
}
