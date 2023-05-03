#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a linked list (safe version)
 *
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr, *next;

	if (head == NULL)
		exit(98);

	curr = head;
	while (curr != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)curr, curr->n);
		next = curr->next;
		if (next >= curr)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}
		curr = next;
	}
	return (count);
}
