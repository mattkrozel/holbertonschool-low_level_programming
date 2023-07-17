#include "lists.h"

/**
 * *add_nodeint_end - a function that adds a new node at the end of list_t
 * @n: input
 * @head: head
 * Return: address of a new element or null if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *temp, *nnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);

	nnode->n = n;
	if (*head == NULL)
	{
		nnode->next = *head;
		*head = nnode;
	}
	else
	{
		nnode->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = nnode;
	}
	return (nnode);
}
