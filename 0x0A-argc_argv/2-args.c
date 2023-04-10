#include "main.h"
#include <stdio.h>
/**
 * main - Entry pooint
 * @argc: counts and prints number of arguments
 * @argv: prints array of arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
