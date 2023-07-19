#include "lists.h"

/**
 * *add_dnodeint - a function that adds a new node at the beginning of list_t
 * @n: input
 * @head: head
 * Return: address of a new element or null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *temp;

	temp = *head;
	*head = malloc(sizeof(dlistint_t));
	if (!*head)
		return (NULL);
	while (*head)
	{
		(*head)->n = n;
		(*head)->next = temp;
	}
	return (*head);
}
