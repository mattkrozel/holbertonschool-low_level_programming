#include "hash_tables.h"

/**
 * *hash_table_print - a funnction that prints a hash table
 * @ht: input
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	int flag;
	unsigned long int x;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	flag = 0;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		temp = ht->array[x];
		while (temp != NULL)
		{
			if (flag == 0)
				flag = 1;
			else
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");

}
