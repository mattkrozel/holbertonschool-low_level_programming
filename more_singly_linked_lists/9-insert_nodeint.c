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
	unsigned int x = 0;
	listint_t *nnode, *temp;
	if (head == NULL)
		return (NULL);
	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	if (*head == NULL)
	{
		if (idx == 0)
		{
			*head = nnode;
			nnode->next = NULL;
			return (nnode);
		}
		else
		{
			free(nnode);
			return (NULL);
		}
	}
	if (idx == 0)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}
	temp = *head;
	while (temp != NULL && x < idx - 1)
	{
		temp = temp->next;
		x++;
	}
	if (temp == NULL)
	{
		free(nnode);
		return (NULL);
	}
	nnode->next = temp->next;
	temp->next = nnode;
	return (nnode);
}
