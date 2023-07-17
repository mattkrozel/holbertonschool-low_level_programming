#include "lists.h"

/**
 * print_listint - a funnction that sums all parameters
 * @h: input
 * @: input
 * Return: nothing
 */

size_t print_listint(const listint_t *h)
{

	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
