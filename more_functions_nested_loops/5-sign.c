#include <stdio.h>
#include "main.h"

/**
 * print_sign - Check main
 * @n: An input number
 * Description: function prints the sign of the number
 * Return: 1, 0, or -1
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else
	{
		result = 0;
		_putchar('0');
	}
	return (result);
}
