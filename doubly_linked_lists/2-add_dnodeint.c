#include "lists.h"

/**
 * add_dnodeint - 'Adds a new node at the beginning of a dlistint_t list.'
 * @head: Is a pointer to a list.
 * @n: Is an integer to add.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add, *aux;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
	{
		free(add);
		return (NULL);
	}
	add->n = n;
	add->prev = NULL;
	aux = *head;
	if (*head == NULL)
	{
		add->next = NULL;
		*head = add;
	}
	else
	{
		add->next = *head;
		aux->prev = add;
	}
	*head = add;
	return (*head);
}
