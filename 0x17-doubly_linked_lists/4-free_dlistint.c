#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees the memory occupied by each node
 * in the dlistint_t list, starting from the head node.
 * It sets the head pointer to NULL after freeing all the nodes.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
