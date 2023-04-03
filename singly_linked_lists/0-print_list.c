#include "lists.h"

/**
 * print_list - 'Prints all the elements of a list_t list.'
 * @h: Is the head of the list list_t.
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			n++;
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			n++;
			h = h->next;
		}
	}
	return (n);
}
