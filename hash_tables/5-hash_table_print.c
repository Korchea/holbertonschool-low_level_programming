#include "hash_tables.h"

/**
 * hash_table_print - 'Prints a hash table.'
 * @ht: Is the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int j = 0;

	printf("{");
	for (i = 0; ht != NULL && i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			if (j > 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
			j = 1;
		}
	}
	printf("}\n");
}
