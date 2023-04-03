#include "lists.h"

/**
 * add_node - 'Adds a new node at the beginning of a list_t list.'
 * @head: Is the list.
 * @str: Is a string.
 * Return: The addres of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		free(add);
		return (NULL);
	}
	add->str = strdup(str);
	add->len = strlen(str);
	add->next = *head;
	*head = add;
	return (*head);
}
