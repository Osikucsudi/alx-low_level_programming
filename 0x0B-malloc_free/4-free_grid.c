#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - dimensional grid
 * @grid: parameter
 * @height: length
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
	{
		free(grid[g]);
	}
	free(grid);
}
