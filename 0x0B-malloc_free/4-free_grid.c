#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: space to be freed
 * @height: grid height
 */

void free_grid(int **grid, int height)
{
	int v;

	if (grid == NULL || height == 0)
		return;

	for (v = 0; v < height; v++)
		free(grid[v]);

	free(grid);
}
