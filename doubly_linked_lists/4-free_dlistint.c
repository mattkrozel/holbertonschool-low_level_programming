#include "lists.h"

/**
 * free_dlistint - frees all elements in linked list
 * @head: input
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}
	free(head);
}
