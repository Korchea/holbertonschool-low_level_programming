#include "lists.h"

/**
 * free_list - 'Frees a list_t list.'
 * @head: Is the list to free.
 */

void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
