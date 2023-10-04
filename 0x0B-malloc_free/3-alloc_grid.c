#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of
 * zeros.
 * @width: the width of the 2-dimensional array.
 * @height: the height of the 2-dimensional array.
 *
 * Return: a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int n, m, **grid_array;

	if (width < 1 || height < 1)
		return (NULL);

	grid_array = malloc(height * sizeof(int *));

	if (grid_array == NULL)
	{
		free(grid_array);
		return (NULL);
	}

	for (n = 0; n < height; i++)
	{
		grid_array[i] = malloc(sizeof(int) * width);
		if (grid_array[i] == NULL)
		{
			while (--n >= 0)
				free(grid_array[i]);
			free(grid_array);
			return (NULL);
		}
	}
	for (n = 0; n < height; i++)
	{
		for (m = 0; m < width; j++)
			grid_array[i][j] = 0;
	}
	return (grid_array);
}
