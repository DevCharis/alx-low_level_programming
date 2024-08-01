#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: Pointer to the head of the list_t list.
 * Description: This function traverses the singly linked list, counting
 *              the number of nodes until the end of the list is reached.
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}

