#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a linked list of integers, handling loops
 *
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *turtle = head, *hare = head;
	size_t count = 0;

	while (turtle && hare && hare->next)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
		{
			printf("-> [%p] %d\n", (void *)hare, hare->n);
			break;
		}
		printf("[%p] %d\n", (void *)turtle, turtle->n);
		count++;
	}
	if (!turtle || !hare || !hare->next)
	{
		printf("[%p] %d\n", (void *)turtle, turtle->n);
		count++;
	}
	return (count);
}
