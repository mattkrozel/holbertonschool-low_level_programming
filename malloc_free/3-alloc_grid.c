#include "main.h"

/**
 * **alloc_grid - function that returns pointer to 2d
 * array of ints
 * @width: input
 * @height: input
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int **array, x = 0, y = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (; x < height; x++)
	{
		array[x] = (int *)malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			for (; x >= 0; x--)
				free(array[x]);
			free(array);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
		for (; y < width; y++)
			array[x][y] = 0;

	return (array);
}
