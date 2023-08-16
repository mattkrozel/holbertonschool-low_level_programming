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

	int m, r, l = 0;

	r = size - 1;

	while (l <= r)
	{
		m = l + (r - 1) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);



}
