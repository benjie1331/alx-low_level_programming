#include "main.h"
#include <stdlib.h>
/**
 * *create_array - fcn that creates arrays
 * @size: input
 * @c: input
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int i;

	ptr = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
