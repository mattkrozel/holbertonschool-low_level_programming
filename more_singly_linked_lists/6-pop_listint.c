#include "lists.h"

/**
 * pop_listint - funnction that deletes head node of linked list and returns
 * the nodes data
 * @head: input
 * Return: data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *nnode;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	nnode = (*head)->next;
	free(*head);
	*head = nnode;
	return (n);
}
