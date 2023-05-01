#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a linked list of integers safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *node = head;
    size_t count = 0;
    int found_cycle = 0;

    while (node)
    {
        if (!found_cycle && node->next && node->next <= node)
        {
            printf("-> [%p] %d\n", (void *)node->next, node->next->n);
            found_cycle = 1;
            count++;
        }
        else if (!found_cycle)
        {
            printf("[%p] %d\n", (void *)node, node->n);
            count++;
        }

        node = node->next;
    }

    if (found_cycle)
    {
        exit(98);
    }

    return (count);
}

