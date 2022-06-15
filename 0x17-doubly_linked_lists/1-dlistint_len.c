#include "lists.h"

/**
 * dlistint_len - number of elements in a linked dlistint_t list
 * @h: Head of the linked list
 *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
