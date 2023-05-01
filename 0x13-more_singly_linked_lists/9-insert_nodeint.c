#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node, *current_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	prev_node = *head;
	current_node = (*head)->next;

	for (i = 1; i < idx; i++)
	{
		if (current_node == NULL)
			return (NULL);

		prev_node = current_node;
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current_node;
	prev_node->next = new_node;

	return (new_node);
}
