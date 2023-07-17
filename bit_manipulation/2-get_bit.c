#include "main.h"

/**
 * get_bit - gets value of bit at specific place
 * @n: input
 * @index: input
 * Return: 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{

	int x;

	if (index > 63)
		return (-1);

	x = n >> index;
	return (x & 1);
}
