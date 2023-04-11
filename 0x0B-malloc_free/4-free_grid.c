#include "main.h"
/**
 * free_grid - this frees up grid
 *
 * @grid: input grid
 * @height: input array height
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
