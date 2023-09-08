#include <string.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key in the hash table.
 * @ht: The hash table to search.
 * @key: The key to look for.
 *
 * Return: The value associated with the key, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	/* Search for the key in the linked list at the index */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	/* Key not found */
	return (NULL);
}
