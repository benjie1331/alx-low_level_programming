#include "main.h"
/**
 * *_strpbrk - fcn that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: pointer to char
 */
char *_strpbrk(char *s, char *accept)
{

	int i, k, j, m;

	i = 0;

	k = 0;

	while (s[i] != 0)
		i++;
	while (accept[k] != 0)
		k++;

	for (j = 0; j <= i; j++)
	{
		for (m = 0; m <= k; m++)
		{
			if (s[j] == accept[m])
			{
				return (&s[j]);
			}
		}
	} return (NULL);

}
