#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list, safely.
 * @h: Double pointer to the head of the list.
 *
 * Return: [The size of the list that was freed.]
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
listint_t *next;
size_t count = 0;

while (current)
{
next = current->next;
free(current);
count++;

if (next >= current)
break;

current = next;
}

*h = NULL;
return (count);
}

