#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _print_rev_recursion - check the code
 * @s : input
 * Description: prints a string followed by a new line
 * Return: 1 or 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s - 1);
	}
	else
		_putchar('\n');

}
