#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid.
 * @grid: pointer to the 2D grid.
 * @height: no of rows.
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	if (grid == NULL)
	{
		return;
	}

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
