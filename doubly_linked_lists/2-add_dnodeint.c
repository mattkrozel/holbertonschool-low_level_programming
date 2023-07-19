#include "lists.h"

/**
 * *add_dnodeint - a function that adds a new node at the beginning of list_t
 * @n: input
 * @head: head
 * Return: address of a new element or null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *temp = NULL, *nnode = NULL;

	nnode = malloc(sizeof(dlistint_t));
	if (!*nnode)
	{
		free(nnode);
		return (NULL);
	}

	nnode->next = NULL;
	nnode->prev = NULL;
	nnode->n = n;

	if (!head || !(*head))
	{
		*head = nnode;
		return (nnode);
	}
	else
	{
		temp = *head;
		temp->prev = nnnode;
		*head = nnode;
		nnode->next = temp;
		return (nnode);
	}
	return (NULL);
}
