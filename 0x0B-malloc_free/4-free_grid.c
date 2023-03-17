#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimentional grid
 * @grid: pointer to the grid
 * @height: the number of rows in array
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[height]);
	free(grid);
}
