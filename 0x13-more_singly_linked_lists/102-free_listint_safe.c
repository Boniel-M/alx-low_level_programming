#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: Pointer to the head of the list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *tmp;

    if (h == NULL || *h == NULL)
        return (0);

    while (*h != NULL)
    {
        if (*h <= (*h)->next)
        {
            free(*h);
            *h = NULL;
            count++;
            break;
        }
        tmp = (*h)->next;
        free(*h);
        *h = tmp;
        count++;
    }
    *h = NULL;
    return (count);
}

