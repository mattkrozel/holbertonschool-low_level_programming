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

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
