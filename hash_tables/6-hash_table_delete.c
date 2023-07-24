#include "hash_tables.h"

/**
 * hash_table_delete - a function that frees an entire hash table
 * @ht: input
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *temp1, *temp2;

	if (ht == NULL)
		return;
	for (x = 0; x < ht->size; x++)
	{
		temp1 = ht->array[x];
		while (temp1 != NULL)
		{
			temp2 = temp1->next;
			free(temp1->key);
			free(temp1->value);
			free(temp1);
			temp1 = temp2;
		}
	}
	free(ht->array);
	free(ht);
}
