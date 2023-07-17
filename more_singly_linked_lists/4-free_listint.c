#include "lists.h"

/**
 * free_listint - frees all elements in linked list
 * @head: input
 * Return: nothing
 */

void free_listint(listint_t *head)
{

	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
