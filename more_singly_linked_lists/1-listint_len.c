#include "lists.h"

/**
 * listint_len - a function that returns number of elements in linked list
 * @h: input
 * Return: nothing
 */

size_t listint_len(const listint_t *h)
{

	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
