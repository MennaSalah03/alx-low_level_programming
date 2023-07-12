#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a two dimentsional array
 * @grid: double pointer to the array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	/*we do the same process in last task by freeing memory*/
	for (; height >= 0; height--)
	{
		free(grid[height]);
	}
	free(grid);
}
