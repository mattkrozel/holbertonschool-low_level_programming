#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *string_toupper - Check main
 * @s: input
 * Description: function that that makes all lowercase to uppercase
 * Return: results
 */

char *string_toupper(char *s)
{
	char *updated = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (updated);
}
