#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - reverses array of integers
 * @a: pointer to array
 * @n: number of elements in an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, rev_count;

	n = n - 1;
	rev_count = 0;
	while (rev_count <= 0)
	{
		temp = a[rev_count];
		a[rev_count++] = a[n];
		a[n--] = temp;
	}

}
