#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: a pointer to the 2 dimensional grid
 * @height: height of the grid.
 *
 */

void free_grid(int **grid, int height)
{
	int h;

	h = 0;
	while (h < height)
	{
		free(grid[h]);

		h++;
	}
	free(grid);
}
