#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to a hash table
 * @key: input
 * @value: input
 * @ht: input
 * Return: address of a new element or null if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valcop = NULL, *keycop = NULL;
	hash_node_t *nnode = NULL, *tempnode = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	valcop = strdup(value);
	keycop = strdup(key);
	nnode = malloc(sizeof(hash_node_t));
	if (!nnode)
		return (0);
	nnode->key = keycop;
	nnode->value = valcop;
	nnode->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] != NULL)
	{
		tempnode = (ht->array)[index];
		while (tempnode)
		{
			if (strcmp(tempnode->key, keycop) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = valcop;
				free(keycop);
				free(nnode);
				return (1);
			}
			tempnode = tempnode->next;
		}
		tempnode = (ht->array)[index];
		nnode->next = tempnode;
		(ht->array)[index] = nnode;
	}
	else
		(ht->array)[index] = nnode;
	return (1);
}
