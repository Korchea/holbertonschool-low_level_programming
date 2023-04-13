#include "hash_tables.h"

/**
 * hash_table_set - 'Adds an element to the hash table.'
 * @ht: Is the hash table you want to add or update the key/value to.
 * @key: Is the key.
 * @value: Is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0, i = 0;
	hash_node_t *node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
	{
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	node->key = strdup(key);
	node->value = strdup(value);
	ht->array[index] = node;
	return (1);
}
