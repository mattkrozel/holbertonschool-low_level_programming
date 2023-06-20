#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - Check main
 * @s: An input character
 * Description: function comverts string to int
 * Return: int
 */

int _atoi(char *s)
{
	int x = 1;
	unsigned int res = 0;

	do {
		if (*s == '-')
			x *= -1;

		else if (*s >= '0' && *s <= '9')
			res = (res * 10) + (*s - '0');
		else if (res > 0)
			break;
	} while (*s++);
	return (res * x);
}
