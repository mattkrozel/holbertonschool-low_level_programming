#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_array - Write a function that prints n elements of an
 * array of ints,
 * followed by a new line.
 * @a: An input integer
 * @n: input int
 * Return: n elements of an array of ints followed by new line
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
