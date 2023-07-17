#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of linked list
 * @head: start
 * @index: input
 * Return: 1 if succes or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *deleted;
	unsigned int x = 1;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (x < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			x++;
		}
		deleted = temp;
		deleted = deleted->next;
		temp->next = deleted->next;
		free(deleted);
	}
	return (1);
}
