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
	dlistint_t *aux1 = NULL, *aux2 = NULL;
	unsigned int i = 0;

	if (!*h)
		return (NULL);
	aux2 = *h;
	while (aux2->prev != NULL)
		aux2 = aux2->prev;
	for (i = 0; i < idx; i++)
	{
		if (aux2->next == NULL)
		{
			return (NULL);
		}
		else
		{
			aux2 = aux2->next;
		}
	}
	aux1 = aux2->prev;
	add_dnodeint(&aux2, n);
	aux2->prev = aux1;
	aux1->next = aux2;
	return (*h);
}
