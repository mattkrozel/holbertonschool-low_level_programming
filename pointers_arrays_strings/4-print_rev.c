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
	char str[100];

	str = strrev(s);
	_putchar(str);

}
