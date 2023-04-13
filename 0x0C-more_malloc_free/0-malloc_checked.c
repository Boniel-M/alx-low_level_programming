#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked -  allocate memory using malloc
 * @b: requested size
 *
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
