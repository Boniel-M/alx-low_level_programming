#include <stdio.h>
#include "main.h"
/**
 * print_triangle -  prints a triangle
 * @size: is the size of the triangle
 *
 * Return: void
 *
 */

void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= row; col++)
		{
			putchar('#');
		}

		putchar('\n');
	}
}
