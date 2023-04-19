#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - applies a function to elements
 *
 * @size: size of array
 * @array: pointer to array
 * @action: function to be applied to each array
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
