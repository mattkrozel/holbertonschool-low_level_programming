#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: input
 * @index: input
 * Return: nth node or null if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

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
