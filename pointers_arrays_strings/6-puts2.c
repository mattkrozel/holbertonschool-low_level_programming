#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * puts2 - Check main
 * @str: An input number
 * Description: function that draws a straight line in the terminal
 * Return: line
 */
void puts2(char *str)
{
	int len = 0, x = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; x <= len; x += 2)
		_putchar(str[x]);

	_putchar('\n');
}
