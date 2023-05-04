#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: the number to extract the bit from.
 * @index: the index of the bit to extract, starting from 0
 *
 * Return: returns the value of the bit at index `index`
 * If `index` is greater than or equal to the number of bits in `n`
 * Returns -1 to indicate an invalid index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
