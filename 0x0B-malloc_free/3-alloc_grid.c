#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Create a 2 dimensional array
 * @width: Width of grid, aka # of columns
 * @height: Height of grid, aka # of rows
 *
 * Return: Pointer to 2D array, NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	i = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(*arr));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	while (i < height)
	{
		arr[i] = malloc(width * sizeof(**arr));
		if (arr[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	return (arr);
}
