#include "lists.h"

/**
 * free_dlistint - Free list
 * @head: Head of the list
 *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
