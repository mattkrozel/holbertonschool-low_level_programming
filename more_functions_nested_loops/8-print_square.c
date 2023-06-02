#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_square - Check main
 * @size: An input number
 * Description: function that prints square made out of #
 * Return: square
 */
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar('#');
		}
		_putchar('#');
		if (x < (size - 1))
			_putchar('\n');
	}
}
