#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - fcn that retuenrs ptr
 * @str: ptr
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *ptr;

	int i, size;

	size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;

	ptr = malloc(size * sizeof(*str) + 1);

	if (ptr == 0)
	{	return (NULL);
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}

	}

	return (ptr);
}
