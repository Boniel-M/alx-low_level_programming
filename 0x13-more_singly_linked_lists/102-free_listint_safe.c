#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list
 *
 * @h: A pointer to the address of the head node
 *
 * Return: The number of nodes in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if ((void *)next >= (void *)current)
		{
			*h = NULL;
			break;
		}
		current = next;
	}

	*h = NULL;
	return (count);
}
