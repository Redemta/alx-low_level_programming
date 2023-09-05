#include "main.h"

/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: parameter width.
 * @height: parameter height.
 * Return: grid.
 */

int **alloc_grid(int width, int height)
{
	int **g;
	int x = 0;
	int y = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	g = (int **)malloc(height * sizeof(int *));

	if (g == NULL)
	{
		return (NULL);
	}
	while (x < height)
	{
		g[x] = (int *)malloc(width * sizeof(int));

		if (g[x] == NULL)
		{
			while (y < x)
			{
				free(g[y]);
				y++;
			}
			free(g);
			return (NULL);
		}
		y = 0;

		while (y < width)
		{
			g[x][y] = 0;
			y++;
		}
		x++;
	}
	return (g);
}
