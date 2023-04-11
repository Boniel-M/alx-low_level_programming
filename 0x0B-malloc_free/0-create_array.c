#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array -  Entry point
 * @size: size of array to create
 * @c: character to initialize in the array
 * Return: arr to the pointer and null if failed to allocate
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
