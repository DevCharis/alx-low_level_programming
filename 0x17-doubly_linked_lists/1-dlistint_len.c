#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

/* Traverse the list */
while (h != NULL)
{
count++;        /* Increment the count for each node */
h = h->next;    /* Move to the next node */
}

return (count);      /* Return the total number of nodes */
}