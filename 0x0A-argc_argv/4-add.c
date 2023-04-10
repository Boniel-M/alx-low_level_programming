#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: count arguments
 * @argv: array of arguments
 *
 * Return: 1 error, 0 success
 *
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
