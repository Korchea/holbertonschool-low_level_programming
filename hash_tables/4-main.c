#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void _hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	char n;

	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		printf("[%lu]", i);
		n = 0;
		while (p)
		{
			if (n)
				printf(", ");
			printf("'%s': '%s'", p->key, p->value);
			p = p-> next;
			n = 1;
		}
		printf("\n");
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	char *value;

	ht = hash_table_create(30);
	hash_table_set(ht, "USA", "Washington");
	hash_table_set(ht, "France", "Paris");
	hash_table_set(ht, "UK", "London");
	hash_table_set(ht, "Spain", "Madrid");
	hash_table_set(ht, "Germany", "Berlin");
	hash_table_set(ht, "China", "Beijing");
	hash_table_set(ht, "Russia", "Moscow");
	hash_table_set(ht, "Bahrain", "Manama");
	hash_table_set(ht, "Canada", "Ottawa");
	hash_table_set(ht, "Brazil", "Brasilia");
	hash_table_set(ht, "Sweden", "Stockholm");
	hash_table_set(ht, "Iceland", "Reykjavik");
	hash_table_set(ht, "Japan", "Tokyo");
	hash_table_set(ht, "Australia", "Canberra");

	_hash_table_print(ht);
	value = hash_table_get(ht, "Canada");
	printf("%s:%s\n", "Canada", value);
	return (EXIT_SUCCESS);
}
