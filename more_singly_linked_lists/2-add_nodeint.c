#include "lists.h"

/**
 * *add_nodeint - a function that adds a new node at the beginning of list_t
 * @n: input
 * @head: head
 * Return: address of a new element or null if failed
 */

list_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *temp;

	temp = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);

	(*head)->n = n;
	(*head)->next = temp;
	return (*head);
}
