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
	dlistint_t *aux1 = NULL, *aux2 = NULL, *aux3 = NULL;
	unsigned int i = 0;

	if (!(*h))
		return (NULL);
	while ((*h)->prev != NULL)
		(*h) = (*h)->prev;
	aux3 = (*h);
	for (i = 0; i < idx - 1; i++)
	{
		if ((*h)->next == NULL)
		{
			return (NULL);
		}
		else
		{
			(*h) = (*h)->next;
		}
	}
	aux1 = (*h)->next;
	aux2 = malloc(sizeof(dlistint_t));
	if (!aux2)
	{
		free(aux2);
		return (NULL);
	}
	aux2->n = n;
	aux2->prev = (*h);
	aux2->next = aux1;
	(*h)->next = aux2;
	aux1->prev = aux2;
	(*h) = aux3;
	return (*h);
}
