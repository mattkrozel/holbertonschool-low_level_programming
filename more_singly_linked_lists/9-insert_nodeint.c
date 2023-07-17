#include "lists.h"

/**
 * *insert_nodeint_at_index - function that inserts new node at given position
 * @head: start
 * @idx: index
 * @n: input
 * Return: address of new node or null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 1;
	listint_t *nnode, *temp;

	if (head == NULL)
		return (NULL);

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = nnode;
		nnode->next = NULL;
		nnode->n = n;
		return (nnode);
	}

	if (idx == 0)
	{
		nnode->next = *head;
		nnode->n = n;
		*head = nnode;
		return (nnode);
	}

	temp = *head;
	while (x < idx)
	{
		temp = temp->next;
		x++;
	}

	nnode->n = n;
	nnode->next = temp->next;
	temp->next = nnode;
	return (nnode);
}

