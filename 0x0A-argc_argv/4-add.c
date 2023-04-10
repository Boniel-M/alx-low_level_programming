#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: counts and prints arguments
 * @argv: prints array of arguments
 *
 * Return: 0 Success, 1 Error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int j;

		char *arg = argv[i];

		for (j = 0; arg[j]; j++)
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
