#include "main.h"

/**
 * flip_bits - returns number of bits you would need to flip to
 * get from one to another
 * @n: input
 * @m: input
 * Return: nothing
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int comp = n ^ m;
	unsigned int total = 0;

	for (; comp > 0;)
	{
		total += (comp & 1);
		comp >>= 1;
	}
	return (total);
}
