#include "main.h"
/**
 * *create_array - fcn that creates arrays
 * @size: input
 * @c: input
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	int i;

	i == 0;

	ptr = malloc(size);

	if (size == 0)
		return (0);
	for (i; i <= size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
