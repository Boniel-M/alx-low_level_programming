#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list/node
 *
 * Return: number of the nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("%s\n", current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		current = current->next;
	}
	return count;
}
