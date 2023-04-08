#include "main.h"

/**
 * print_chessboard - prints a chessboard from a
 * 2D array of characters
 *
 * @a: the 2D array of characters representing the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int j;
	int i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
