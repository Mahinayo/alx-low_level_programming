#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes at index
 * @head: memory address
 * @index: Index
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *prev = NULL;
	unsigned int x = 0;

	if (head == NULL || temp == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && x != index)
	{
		prev = temp;
		temp = temp->next;
		x++;
	}
	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev;
	free(temp);

	return (1);
}
