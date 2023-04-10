#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * function that prints its name
 *
 * Return: int 
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
