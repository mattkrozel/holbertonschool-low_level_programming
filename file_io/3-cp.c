#include "main.h"

/**
 * set_bit - sets value of specific bit
 * @n: input
 * @index: input
 * Return: 1 or 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
