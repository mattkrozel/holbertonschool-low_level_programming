#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_line - Check main
 * @n: An input number
 * Description: function that draws a straight line in the terminal
 * Return: line
 */
void print_line(int n)
{
	int l = 0;

	if (n > 0)
	{
		for (; l < n; l++)
			_putchar('_');
	}
	_putchar('\n');
}
