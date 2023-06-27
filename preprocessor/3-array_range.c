#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: input
 * @max: input
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int diff, x, *array;

	if (min > max)
		return (NULL);

	diff = max - min;
	array = malloc((diff + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (x = 0; x <= diff; x++)
		array[x] = min++;


	return (array);
}
