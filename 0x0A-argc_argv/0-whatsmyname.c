#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: prints number of arguments passed
 * @argv: prints array of arguments passed
 *
 * Return: 0 always
 *
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n", argc);
	else
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
