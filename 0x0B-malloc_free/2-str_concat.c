#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - fcn that concatenates
 * @s1: input
 * @s2: input
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	int i, size1, size2;

	size1 = 0;

	size2 = 0;

	if (s1 == NULL)
	s1 = "\0";
	if (s2 == NULL)
	s2 = "\0";

	while (s1[size1] != '\0')
	size1++;
	while (s2[size2] != '\0')
	size2++;

	size2 += size1;
	ptr = malloc(size2 * sizeof(char) + 1);

	if (ptr == 0)
	return (0);

	for (i = 0; i <= size2; i++)
	{
		if (i < size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1];
	}	ptr[i] = '\0';
	return (ptr);
}

