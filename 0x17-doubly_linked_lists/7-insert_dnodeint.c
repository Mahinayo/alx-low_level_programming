#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node
 * @h: Head of the list
 * @idx: Index
 * @n: integer
 *
 * Return: the address, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *head = *h, *prev = *h;
	unsigned int x;

	if (h == NULL || (head == NULL && idx > 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	head = head->next;
	for (x = 1; x < idx; x++)
	{
		if (prev->next == NULL)
			return (NULL);
		head = head->next;
		prev = prev->next;
	}
	if (head == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = head;
	new->prev = prev;
	prev->next = new;
	if (head != NULL)
		head->prev = new;
	return (new);
}
