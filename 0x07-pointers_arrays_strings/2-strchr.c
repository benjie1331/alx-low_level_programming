#include "main.h"
/**
 * *_strchr - fcn that locates char in string
 * @s: input
 * @c: input
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
