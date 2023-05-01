#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - Prints a listint_t linked list safely
 *
 * @head: A pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count;

	slow = head;
	fast = head;
	count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;

			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				count++;
				slow = slow->next;
				fast = fast->next;
			}
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}
	if (slow != fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}
	return (count);
}
