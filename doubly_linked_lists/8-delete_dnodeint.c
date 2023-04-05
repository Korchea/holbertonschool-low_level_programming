#include "lists.h"

/**
 * delete_dnodeint_at_index - 'Deletes the node at index of
 * a dlistint_t linked list.'
 * @head: is a list.
 * @index: The position to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *aux = NULL, *aux1 = NULL;

	aux = *head;
	if (aux == NULL)
		return (-1);
	while (aux->prev != NULL)
		aux = aux->prev;
	for (i = 0; i < index; i++)
	{
		if (aux->next == NULL)
		{
			return (-1);
		}
		else
		{
			aux = aux->next;
		}
	}
	if (index == 0)
	{
		if (aux->next != NULL)
		{
		aux = aux->next;
		aux->prev = NULL;
		(*head) = aux;
		}
		else
			(*head) = NULL;
	}
	else
	{
		aux1 = aux->prev;
		aux = aux->next;
		aux->prev = aux1;
		aux1->next = aux;
	}
	return (1);
}
