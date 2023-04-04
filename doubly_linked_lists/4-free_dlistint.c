#include "lists.h"

/**
 * free_dlistint - 'Frees a dlistint_t list.'
 * @head: Is a list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			aux = head;
			head = head->next;
			free(aux);
		}
	}
}
