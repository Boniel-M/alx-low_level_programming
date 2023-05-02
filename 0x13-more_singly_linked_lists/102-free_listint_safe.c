#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t list
 *
 * @h: Double pointer to head node of list
 *
 * Return: Number of nodes in the list that were freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *current = *h;

	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);
		*h = NULL;
		if (temp <= current)
			break;
	}
	return (count);
}
