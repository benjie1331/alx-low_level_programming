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

	for (j = 0; j < k; j++)
	{
		for (m = 0; m < i; m++)
		{
			if (accept[j] == s[m])
			{
				return (&s[m]);
			}
		}
	} return (NULL);

}
