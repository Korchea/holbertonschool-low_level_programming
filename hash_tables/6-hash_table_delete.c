#include "hash_tables.h"

/**
 * hash_table_delete - 'Deletes a hash table.'
 * @ht: Is the hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux1, *aux2;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			while (ht->array[i] != NULL)
			{
				aux1 = ht->array[i];
				aux2 = aux1->next;
				free(aux1->key);
				free(aux1->value);
				free(aux1);
				aux1 = aux2;
			}
		}
		free(ht->array);
		free(ht);
	}
}
