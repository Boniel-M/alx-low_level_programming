#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - applies a function to each element of an array
 *
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to apply to the array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
