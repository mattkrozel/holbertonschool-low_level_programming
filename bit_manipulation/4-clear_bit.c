#include "main.h"

/**
 * clear_bit - sets a value of a bit to 0
 * @n: input
 * @index: input
 * Return: nothing
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
