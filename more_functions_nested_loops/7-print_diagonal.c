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
	int l = 0;

	if (n > 0)
	{
		for (; l < n; l++)
			_putchar('\\');
	}
	_putchar('\n');
}
