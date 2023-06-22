#include "main.h"

/**
 * *array_range - function that 
 * @min: input
 * @max: input
 * Return: Nothing.
 */

int *array_range(int min, int max)
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
