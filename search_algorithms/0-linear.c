#include "search_algos.h"

/**
 * linear_search - searchs an array using linear algorithm
 * @array: array
 * @size: size of array
 * @value: value we're checking
 * Return: value or -1
 */
int linear_search(int *array, size_t size, int value)
{

	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			if (array[i] == value)
				return (i);
	}
	return (-1);

}
