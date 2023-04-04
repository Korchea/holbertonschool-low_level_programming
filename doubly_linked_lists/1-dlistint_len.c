#include "lists.h"

/**
 * dlistint_len - 'Returns the number of elements in a linked dlistint_t list.'
 * @h: Is a list.
 * Return: The number of elements linked.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == 0)
		return (n);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
