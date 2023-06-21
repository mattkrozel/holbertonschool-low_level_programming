#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars and initializes it with a
 * specific char
 * @c: input
 * @size: input
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	int x = 0;

	ch = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	while (x < size)
	{
		ch[x] = c;
		x++;
	}
	return (ch);
}
