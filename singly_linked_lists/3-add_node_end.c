#include "lists.h"

/**
 * add_node_end - 'Adds a new node at the end of a list_t list.'
 * @head: Is the list.
 * @str: Is a string.
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *aux;

	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		free(add);
		return (NULL);
	}
	add->str = strdup(str);
	add->len = strlen(str);
	add->next = NULL;
	aux = *head;
	if (aux != NULL)
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = add;
	}
	else
	{
		*head = add;
	}
	return (*head);
}
