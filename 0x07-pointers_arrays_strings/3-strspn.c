#include "main.h"
/**
 * _strspn - fcn that gets the length of a prefix
 * @s: input
 * @accept: input
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, m, k, counter;

	counter = 0;

	i = 0;

	j = 0;

	while (accept[i] != 0)
		i++;
	while (s[j] != 0)
		j++;

	for (m = 0; m <= i; m++)
	{
		for (k = 0; k <= j; k++)
		{
			if (accept[m] == s[k])
			{	counter++;
				break;
			}
		}
	} return counter;
}
