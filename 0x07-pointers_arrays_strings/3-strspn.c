#include "main.h"
/**
 * _strspn - fcn that gets the length of a prefix
 * @s: input
 * @accept: input
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, m, k;

	i = 0;

	j = 0;

	while (accept[i] != 0)
		i++;
	while (s[j] != 0)
		j++;

	for (k = 0; k <= j; k++)
	{
		for (m = 0; accept[m] != s[k]; m++)
		{
			if (accept[m] == 0)
			{
				return (k);
			}
		}
	} return k;
}
