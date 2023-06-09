#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Check main
 * @r: An input number
 * Description: function that prints last digit of number
 * Return: last digit of r
 */
int print_last_digit(int r)
{
	int last;

	if (r < 0)
		last = -1 * (r % 10);
	else
		last = r % 10;

	_putchar((last % 10) + '0');
	return (last % 10);
}
