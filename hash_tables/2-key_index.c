#include "hash_tables.h"

/**
 * key_index - a function that gives you index of a key
 * @key: input
 * @size: input
 * Return: nothing
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2((unsigned char *)key);
	return (index % size);
}
