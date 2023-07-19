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
	dlistint_t *temp = NULL, *nnode = NULL;
	
	nnode = malloc(sizeof(dlistint_t));

	if (!nnode)
		return (NULL);
	nnode->next = NULL;
	nnode->prev = NULL;
	nnode->n = n;

	if (!h || !(*h))
		*h = nnode;
	else
	{
		temp = *h;
		while (idx != x++ && temp->next)
			temp = temp->next;
		if (temp->next)
			nnode->prev = temp->prev;
		else
			nnode->prev = temp;
		if (idx == x)
			temp->next = nnode, nnode->prev = temp;
		else if (idx == x - 1)
		{
			if (temp->prev)
				temp->prev->next = nnode;
			else
				*h = nnode;
			temp->prev = nnode;
			nnode->next = temp;
		}
		else
		{
			free(nnode);
			return (NULL);
		}
	}

	return (nnode);
}
