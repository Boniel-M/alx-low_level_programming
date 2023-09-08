#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Print the contents of a hash table.
 * @ht: The hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first_pair = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first_pair = 0;

			current = current->next;
		}
	}
	printf("}\n");
}
