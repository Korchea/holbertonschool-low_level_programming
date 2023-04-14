#include "hash_tables.h"

/**
 * hash_table_print - 'Prints a hash table.'
 * @ht: Is the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int j = 0;
	hash_node_t *aux;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			aux = ht->array[i];
			while (aux != NULL)
			{
				if (j > 0)
					printf(", ");
				printf("'%s': '%s'", aux->key, aux->value);
				aux = aux->next;
				j = 1;
			}
		}
		printf("}\n");
	}
}
