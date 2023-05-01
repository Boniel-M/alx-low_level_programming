#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 *
 * @head: pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	current = *head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*head = NULL;
}
