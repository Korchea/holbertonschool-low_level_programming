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
	unsigned long int index = 0;
	hash_node_t *node;

	if (key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	node->key = (char *)key;
	node->value = (char *)value;
	ht->array[index] = node;
	return (1);
}
