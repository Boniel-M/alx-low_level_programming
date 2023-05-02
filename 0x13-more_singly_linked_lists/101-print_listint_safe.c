#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a singly linked list of integers safely
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{const listint_t *tortoise, *hare;
size_t count = 0;

if (head == NULL)
exit(98);

tortoise = hare = head;
while (tortoise && hare && hare->next)
{
tortoise = tortoise->next;
hare = hare->next->next;
if (tortoise == hare)
{
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
count++;
hare = head;
while (tortoise != hare)
{
printf("[%p] %d\n", (void *)hare, hare->n);
count++;
tortoise = tortoise->next;
hare = hare->next;
}
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
count++;
exit(0);
}
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
count++;
}
printf("[%p] %d\n", (void *)tortoise, tortoise->n);
count++;
return (count);
}
