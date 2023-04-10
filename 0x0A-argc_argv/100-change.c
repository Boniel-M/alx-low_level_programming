#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 1 Error, 0 Sucess
 */
int main(int argc, char *argv[])
{
	int cents, num_coins = 0;

	/* Check for correct number of arguments */

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Parse argument as integer */

	cents = atoi(argv[1]);

	/* Check for negative value */

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate number of coins needed for each denomination */

	num_coins += cents / 25;
	cents %= 25;
	num_coins += cents / 10;
	cents %= 10;
	num_coins += cents / 5;
	cents %= 5;
	num_coins += cents / 2;
	cents %= 2;
	num_coins += cents;

	/* Print result */

	printf("%d\n", num_coins);
	return (0);
}
