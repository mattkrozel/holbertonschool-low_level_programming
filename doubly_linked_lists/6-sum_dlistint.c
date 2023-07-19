#include "lists.h"

/**
 * sum_dlistint - sum of linked list
 * @head: input
 * Return: nothing
 */

int sum_dlistint(dlistint_t *head)
{

	int totsum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		totsum += head->n;
		head = head->next;
	}
	return (totsum);
}
