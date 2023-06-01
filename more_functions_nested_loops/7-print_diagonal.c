#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_diagonal - Check main
 * @n: An input number
 * Description: function that prints diagonal lines
 * Return: diagonal
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (; i < n; i++)
		{
			for (; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
