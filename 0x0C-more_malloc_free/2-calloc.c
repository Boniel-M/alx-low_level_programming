#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _calloc - allocate memory to array using malloc
 * @nmemb:number of elements to alloctae memory
 * @size: size of elements to allocate bytes
 *
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0,  nmemb * size);
	return (ptr);
}
