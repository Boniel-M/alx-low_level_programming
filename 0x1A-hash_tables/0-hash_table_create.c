#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	/* Allocate memory for the hash table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for the array of pointers to hash nodes */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* Initialize the size and array elements */
	new_table->size = size;
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
