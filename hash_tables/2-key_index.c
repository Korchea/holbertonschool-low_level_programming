#include "hash_tables.h"

/**
 * key_index - 'Gives you the index of a key.'
 * @key: Is the key.
 * @size: Is the size of the array of the hash table.
 * Return: The index at which the key/value pair should be stored in the array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
