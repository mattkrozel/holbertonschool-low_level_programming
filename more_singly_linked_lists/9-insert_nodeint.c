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
	listint_t *temp = *head;
	listint_t *nnode = malloc(sizeof(listint_t));

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
