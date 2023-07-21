#include "lists.h"

/**
 * delete_dnodeint_at_index - a funnction that deletes node
 * @head: input
 * @index: input
 * Return: nothing
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp, *deleted;
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
