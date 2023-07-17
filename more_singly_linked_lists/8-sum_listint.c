#include "lists.h"

/**
 * sum_listint - function that returns sum of all data (n) of a linked list
 * @head: start
 * Return: sum of all data or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int totalsum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
	totalsum += head->n;
	head = head->next;
	}
	return (totalsum);
}
