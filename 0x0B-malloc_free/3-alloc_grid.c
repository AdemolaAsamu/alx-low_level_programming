#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that points to a two-dim array
 *
 * @width: input width
 * @height: input height
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **two_dim;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	two_dim = malloc(height * sizeof(int));

	if (two_dim == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		two_dim[i] = malloc(width * sizeof(int));

		if (two_dim[i] == NULL)
		{
			for (; i >= 0; i--)
				free(two_dim[i]);
			free(two_dim);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			two_dim[i][j] = 0;
		}
	}
	return (two_dim);
}

