#include "lists.h"

/**
 * print_dlistint - a funnction that prints all elements
 * @h: input
 * Return: nothing
 */

size_t print_dlistint(const dlistint_t *h)
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
