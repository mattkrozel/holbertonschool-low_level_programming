#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_triangle - Check main
 * @size: An input character
 * Description: function uses _putchar function to print a
 * triangle
 * Return: triangle
 */

void print_triangle(int size)
{
	int x = 0, y, g = size - 1;

	if (size > 0)
	{
		for (; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				if (y < g)
					_putchar(' ');
				else
					_putchar('#');
			}
			g--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
