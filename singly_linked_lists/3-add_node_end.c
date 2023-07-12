#include "lists.h"

/**
 * *add_node_end - a function that adds a new node at the end of list_t
 * @str: input
 * @head: head
 * Return: address of a new element or null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int length = 0;
	list_t *temp, *nnode;

	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
		return (NULL);

	while (str[length])
		length++;

	nnode->len = length;
	nnode->str = strdup(str);
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
