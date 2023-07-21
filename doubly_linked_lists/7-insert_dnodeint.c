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

	if (!h)
		return (NULL);
	nnode = malloc(sizeof(dlistint_t));
	if (!nnode)
		return (NULL);
	
	nnode->n = n;
	nnode->prev = NULL;
	nnode->next = NULL;
	if (*h == NULL)
	{
		*h = nnode;
		return (nnode);
	}
	temp = *h;
	while (temp)
	{
		temp = temp->next;
		x++;
	}
	if (idx >= x)
	{
		temp = *h;
		while (temp->next)
			temp = temp->next;
		
		temp->next = nnode;
		nnode->prev = temp;
		return (nnode);
	}
	temp = *h;
	while (temp && x < idx)
	{
		temp = temp->next;
		x++;
	}
	if (x == idx)
	{
		nnode->prev = temp->prev;
		if (temp->prev)
			temp->prev->next = nnode;
		else
			*h = nnode;
		
		nnode->next = temp;
		temp->prev = nnode;
		return (nnode);
	}
	free(nnode);
	return (NULL);
}
