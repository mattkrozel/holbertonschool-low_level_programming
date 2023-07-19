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
	if (!h)
	{
		free(nnode);
		return (NULL);
	}
	if (!(*h))
	{
		*h = nnode;
		return (nnode);
	}
	if (idx == 0)
	{
		nnode->next = *h;
		(*h)->prev = nnode;
		*h = nnode;
		return (nnode);
	}
	temp = *h;
	while (temp && x < idx)
	{
		temp = temp->next;
		x++;
	}
	if (!temp)
	{
		temp = *h;
		while (temp->next)
			temp = temp->next;
		temp->next = nnode;
		nnode->prev = temp;
		return (nnode);
	}
	nnode->prev = temp->prev;
	if (temp->prev)
		temp->prev->next = nnode;
	else
		*h = nnode;
	temp->prev = nnode;
	nnode->next = temp;
	return (nnode);
}
