#include "lists.h"

/**
 * sum_dlistint - Sum list
 * @head: Head of the list
 *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *t = head;
	int x = 0;

	while (t == NULL)
		return (x);

	while (t != NULL)
	{
		x += t->n;
		t = t->next;
	}
	return (x);
}
