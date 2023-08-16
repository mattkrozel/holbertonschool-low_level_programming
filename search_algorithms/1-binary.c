#include "search_algos.h"
/**
 * binary_search - searches thru an array using binary algorithm
 * @array: array
 * @size: size of array
 * @value: value to find
 * Return: value or -1
 */
int binary_search(int *array, size_t size, int value)
{

	int i, m, r, l = 0;

	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		m = (l + r) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);



}
