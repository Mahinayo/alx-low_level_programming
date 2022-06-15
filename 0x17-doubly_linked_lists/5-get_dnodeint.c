#include "lists.h"

/**
 * get_dnodeint_at_index - Get node at index
 * @head: Head of the list
 * @index: Index
 *
 * Return: Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h = head;
	unsigned int x = 0;

	while (h != NULL)
	{
		if (x == index)
			return (h);
		x++;
		h = h->next;
	}

	return (NULL);
}
