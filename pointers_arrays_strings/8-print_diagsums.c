#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - check the code
 * @a : input
 * @size : input
 * Description: function that prints the sum of two diagnols of a
 *		square matrix of ints
 * Return: total
 */
void print_diagsums(int *a, int size)
{
	int x = 0, top = size * size, tot1 = 0, tot2 = 0;

	for (; x < top; x += size + 1)
		tot1 += a[x];

	for (x = size - 1; x < top - 1; x += size - 1)
		tot2 += a[x];

	printf("%d, %d\n", tot1, tot2);
}
