#include "lists.h"

/**
 * dlistint_len - a function that returns number
 * of elements in doubley linked list
 * @h: input
 * Return: nothing
 */

size_t dlistint_len(const dlistint_t *h);
{

	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
