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
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					if (j < i)
					{
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
