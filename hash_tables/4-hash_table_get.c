#include "hash_tables.h"

/**
 * hash_table_get - 'Retrives a value associated with a key.'
 * @ht: Is the hash table you want to look into.
 * @key: Is the key you are looking for.
 * Return: The value associated with the element, or NULL if
 * key couldn´t be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index = 0, i = 0;

	index = key_index((unsigned char *) key, ht->size);
	for (i = index; ht->array[i]; i++)
		if (strcmp(ht->array[i]->key, key) == 0)
			return (ht->array[i]->value);
	return (NULL);
}
