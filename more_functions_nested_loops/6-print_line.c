#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - Check main
 * @n: An input number
 * Description: function that draws a straight line in the terminal
 * Return: line
 */
void print_line(int n)
{
	while (n > 0)
		_putchar(n * ('_'));
		_putchar('\n');
	else
		_putchar('\n');
	return (0);
}
