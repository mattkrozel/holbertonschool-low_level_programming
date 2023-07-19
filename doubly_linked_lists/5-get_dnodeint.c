#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of the linked list
 * @head: input
 * @index: index of node
 * Return: nothing
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	int x = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (x == index)
			return (head);
		head = head->next;
		x++;
	}
	return (NULL);
}
