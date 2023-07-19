#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts new node at given position
 * @h: input
 * @idx: index of list where new node goes
 * @n: input
 * Return: nothing
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	unsigned int x = 0;
	dlistint_t *temp = *h;
	dlistint_t *nnode = malloc(sizeof(dlistint_t));

	if (!nnode)
		return (NULL);

	nnode->n = n;
	if (idx == 0)
	{
		nnode->next = temp;
		*head = nnode;
		return (nnode);
	}

	while (x < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
		x++;
	}

	nnode->next = temp->next;
	temp->next = nnode;
	return (nnode);
}
