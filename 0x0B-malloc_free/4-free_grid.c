#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free previous 2D array
 * @grid: address of the two 2-Dimension Array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
