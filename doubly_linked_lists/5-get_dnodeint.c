#include "lists.h"

/**
 * get_dnodeint_at_index - 'Returns the nth node of a dlistint_t linked list.'
 * @head: Is a list.
 * @index: Is the index of the next node, starting from 0.
 * Return: The nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i;

	aux = head;
	if (head == NULL)
		return (NULL);
	while (aux->prev != NULL)
		aux = aux->prev;
	for (i = 0; i < index; i++)
	{
		if (aux->next == NULL)
		{
			return (NULL);
		}
		else
		{
			aux = aux->next;
		}
	}
	return (aux);
}
