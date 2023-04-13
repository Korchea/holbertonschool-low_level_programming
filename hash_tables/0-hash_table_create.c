#include "hash_tables.h"

/**
 * hash_table_create - 'Creates a hash table.'
 * @size: Is the size of the array.
 * Return: A pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	unsigned int i = 0;

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);
	tab->size = size;
	tab->array = malloc(sizeof(hash_node_t) * size);
	if (tab->array == NULL)
	{
		free(tab);
		return (NULL);
	}
	while (i < size)
	{
		tab->array[i] = NULL;
		i++;
	}
	return (tab);
}
