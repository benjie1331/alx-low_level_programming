#include "main.h"
/**
 * *_strstr - fcn that locates substring
 * @haystack: input
 * @needle: input
 * Return: pointer to char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k, j, l, m;

	i = 0;

	k = 0;

	while (haystack[i] != 0)
		i++;
	while (needle[k] != 0)
		k++;

	for (j = 0; j < i; j++)
	{
		for (m = 0, l = j; m < k; m++, l++)
		{
			if (haystack[l] != needle[m])
			{
				break;
			}

		}
	if (needle[m] == 0)
	return (&haystack[j]);

	} return (NULL);

}
