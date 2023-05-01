#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 *
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current, *tmp;

	current = head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
}
