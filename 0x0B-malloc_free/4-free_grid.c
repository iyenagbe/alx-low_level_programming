#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: 2d of grid
 *
 * @height: height dimension of the grid
 *
 * Description: frees memory of rhe grid
 *
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
