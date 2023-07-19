#include "lists.h"

/**
 * list_len - a function that returns number of elements in linked list
 * @h: input
 * Return: nothing
 */

size_t list_len(const list_t *h)
{

	unsigned int elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
