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
	dlistint_t *aux = *head, *aux1 = NULL, *aux2 = NULL;

	if (aux == NULL)
		return (-1);
	if (index == 0)
	{
		if (aux->next != NULL)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(aux);
			return (1);
		}
		else
		{
			*head = NULL;
			return (1);
		}
	}
	for (i = 0; i < index; i++)
	{
		if (aux->next == NULL)
		{
			return (-1);
		}
		aux = aux->next;
	}
	aux1 = aux->prev;
	aux2 = aux;
	aux = aux->next;
	aux->prev = aux1;
	aux1->next = aux;
	free(aux2);
	return (1);
}
