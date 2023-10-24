#include "main.h"
/**
 * *_strstr - fcn that locates substring
 * @haystack: input
 * @needle: input
 * Return: pointer to char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k, j, m;

	i = 0;
	
	k = 0;

	while (haystack[i] != 0)
		i++;
	while (needle[k] != 0)
		k++;

	for (j = 0; j < k; j++)
	{
		for (m = 0; m < i; m++)
		{
			if (needle[j] == haystack[m])
			{
				return (&haystack[m]);
			}
		}
	} return (NULL);

}
