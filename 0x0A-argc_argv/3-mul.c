#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: counts number of arguments
 * @argv: prints arrays of argument
 *
 * Return: 0 sucess, 1 error
 */
int main(int argc, char *argv[])
{
	int Num1, Num2, Results;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	Num1 = atoi(argv[1]);
	Num2 = atoi(argv[2]);
	Results = Num1 * Num2;
	printf("%d\n", Results);
	return (0);
}
