#include "main.h"
/**
 * swap_int - swaps value of two int
 * @a: value of swap int
 * @b: value of swap int
 *
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
