#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Entry Point
 * @height: array of pointer
 * @grid: two dimensional array of elements
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
