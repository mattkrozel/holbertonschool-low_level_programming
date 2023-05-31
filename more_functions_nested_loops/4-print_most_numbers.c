#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Check main
 * int c
 * Description: function prints from 0-9 except for 2 and 4
 * Return: results
 */

void print_most_numbers(void)
{
	int c = '0';

	for (; c <= '9'; c++)
	{
		if (c != '2' || c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
