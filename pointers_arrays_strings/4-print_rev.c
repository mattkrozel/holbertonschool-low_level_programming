#include <stdio.h>
#include "main.h"

/**
 * print_rev - Check main
 * char s
 * Description: function that prints string in reverse
 * Return: results
 */

void print_rev(char *s)
{
	char rev = revstr(s);

	puts(rev);
}
