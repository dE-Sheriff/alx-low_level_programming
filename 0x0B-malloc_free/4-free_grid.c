#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a
 * 2 dimensional grid previously created by your
 * @grid: the 1st string
 * @height: the 2nd string
 * Return: int
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
