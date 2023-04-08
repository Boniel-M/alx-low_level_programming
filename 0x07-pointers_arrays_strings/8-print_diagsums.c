#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 *
 * @size: specifies the dimension of the square matrix
 * @a: a pointer to the first element of 2D
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}

