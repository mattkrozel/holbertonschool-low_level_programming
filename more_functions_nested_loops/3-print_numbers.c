#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - check the code
 * int c
 * Description: prints numbers 0-9 followed by new line
 * Return: return 0
 */
void print_numbers(void)
{
	int c = '0';

	for (; c < '10'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
