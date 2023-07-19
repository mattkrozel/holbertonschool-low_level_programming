#include "lists.h"

/**
 * free_dlistint - frees all elements in linked list
 * @head: input
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
