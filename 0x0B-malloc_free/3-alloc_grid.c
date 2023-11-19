#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - fcn that returns a poniter to 2d arrasy
 * @width: input
 * @height: input
 * Return: pointer to pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr = malloc(height * sizeof(int *));

	int i, j, k;

	if (width <= 0 || height <= 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < height; k++)
		{
			ptr[k] = malloc(width * sizeof(int));

			if (ptr[k] == 0)
			{
				while (k--)
					free(ptr[k]);
				free(ptr);
				return (NULL);

			}
		}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
		}
	}
	return (ptr);
}
