#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as a parameter
 * specific char
 * @str: input
 * Return: Nothing.
 */

char *_strdup(char *str)
{
	int x = 0, int cnt = 0;

	if (str == NULL)
		return (NULL);

	st = str;

	while (*str)
	{
		cnt++;
		str++;
	}

	str = st;
	str2 = malloc(sizeof(char) * (len + 1));
}
