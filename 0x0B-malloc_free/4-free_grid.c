#include "main.h"
#include <stdlib.h>

/**
 * free_grid - fcn that frees a 2d array
 * @grid: pointer to an array of pointers
 * @height: input
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]); /* free each row */
	}
	free(grid); /* free array of pointers */
}
