#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _realloc -  reallocates a memory block using malloc and free
 *
 * @old_size: size of memory block before reallocation
 * @new_size: new size of memory block after reallocation
 * @ptr: memory pointed
 *
 * Return: ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size <= old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);

}
