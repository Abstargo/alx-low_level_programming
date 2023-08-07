#include <stdlib.h>
#include "main.h"

/**
 * free_grid - fires a 2-dimensional grid previiously created by alloc_grid
 * @grid: The grid to be freed
 * @height: The number of rows in the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	free(grid);
}
