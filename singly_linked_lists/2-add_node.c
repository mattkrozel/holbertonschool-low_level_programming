#include "lists.h"

/**
 * *add_node - a function that adds a new node at the beginning of list_t
 * @str: input
 * @head: head
 * Return: address of a new element or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{

	int length = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
