#include "hash_tables.h"

/**
 * *hash_table_create - a funnction that creates a hash table
 * @size: input
 * Return: nothing
 */

hash_table_t *hash_table_create(unsigned long int size)
{

	unsigned long int x = 0;
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	for (; x < size; x++)
		(new_table->array)[x] = NULL;
	return (new_table);
}
