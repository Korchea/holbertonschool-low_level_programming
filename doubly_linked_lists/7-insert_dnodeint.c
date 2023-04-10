#include "lists.h"

/**
 * insert_dnodeint_at_index - 'Insert a new node at a given position.'
 * @h: Is the list.
 * @idx: Is the index.
 * @n: Is the integer to insert.
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux1 = *h, *aux2 = NULL;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; i < idx; i++)
	{
		if (aux1->next == NULL)
		{
			if (i == idx - 1)
				return (add_dnodeint_end(h, n));
			else
				return (NULL);
		}
		else
		{
			aux1 = aux1->next;
		}
	}
	aux2 = aux1->prev;
	add_dnodeint(&aux1, n);
	aux2->next = aux1;
	aux1->prev = aux2;
	return (aux2);
}
