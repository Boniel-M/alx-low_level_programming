#include "hash_tables.h"
/**
 * hash_djb2 - Compute the hash value of a string using the djb2 algorithm.
 * @str: The input string to be hashed.
 *
 * Return: The computed hash value as an unsigned long int.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	while (*str != '\0')
	{
		hash = ((hash << 5) + hash) + (*str);
		str++;
	}

	return (hash);
}
