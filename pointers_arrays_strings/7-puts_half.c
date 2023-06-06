#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * puts_half - Check main
 * @str: An input number
 * Description: function that prints second half of a string
 * Return: second half of string
 */
void puts_half(char *str)
{
	int len = 0, a, b;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		b = len / 2;
	else
		b = (len + 1) / 2;
	for (a = b; a < len; a++)
		_putchar(str[i]);
	_putchar('\n');
}
