#include "lists.h"

/**
 * add_dnodeint_end - 'Adds a new node at the end of a dlistint_t list.'
 * @head: Is a list.
 * @n: Is the integer to include.
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add, *aux;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
	{
		free(add);
		return (NULL);
	}
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		add->prev = NULL;
		*head = add;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = add;
		add->prev = aux;
	}
	return (add);
}
