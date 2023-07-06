#include "hash_tables.h"

/**
 * hash_djb2 - Calculate the hash value using the djb2 algorithm
 *
 * @str: The input string to be hashed
 *
 * Return: The calculated hash value
 *
 * This function implements the djb2 algorithm to calculate a hash value
 * for the given input string. The algorithm uses a simple hash function
 * that iterates over each character in the string and updates the hash
 * value using the formula: hash = ((hash << 5) + hash) + c, where c is
 * the current character. The initial hash value is set to 5381. The
 * resulting hash value is returned.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}
