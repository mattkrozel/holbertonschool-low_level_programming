#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Check main
 * @x: input
 * @y: input
 * Description: function that returns value of x raised to power of y
 * Return: results
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
