#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - Check main
 * @s: input
 * Description: function that reverses string
 * Return: results
 */

void rev_string(char *s)
{
	int str = 0, x = 0;
	char rev;

	while (s[str] != '\0')
		str++;

	while (x < str--)
	{
		rev = s[x];
		s[x++] = s[str];
		s[str] = rev;
	}
}
