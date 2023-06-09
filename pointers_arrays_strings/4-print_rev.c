#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Check main
 * @s: input
 * Description: function that prints string in reverse
 * Return: results
 */

void print_rev(char *s)
{
	int str = 0;

	while (s[str] != '\0')
		str++;

	while (str)
		_putchar(s[--str]);

	_putchar('\n');
}
