#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _puts_recursion - check the code
 * @s : input
 * Description: prints a string followed by a new line
 * Return: 1 or 0
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar('%c', s);
		s++;
	}
	_putchar('\n');

}
