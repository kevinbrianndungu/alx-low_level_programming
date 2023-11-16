#include "lists.h"
#include <stddef.h>

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    if (h == NULL)
        return 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}
