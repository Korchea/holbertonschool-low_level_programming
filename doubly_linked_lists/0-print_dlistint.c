#include "lists.h"

/**
 * print_dlistint - 'Prints all the elements of a dlistint_t list.'
 * @h: Is the list.
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h == 0)
		return (n);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
