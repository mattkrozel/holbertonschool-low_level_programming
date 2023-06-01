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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
