#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: input
 * Return: value.
 */

void *malloc_checked(unsigned int b)
{
	void *f;

	f = malloc(b);

	if (f == NULL)
		exit(98);
	return (f);
}
