#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
listint_t *temp;
listint_t *nodes[1024];
size_t count = 0;
size_t index;

while (current != NULL)
{
for (index = 0; index < count; index++)
{
if (nodes[index] == current)
{
*h = NULL;
return (count);
}
}

nodes[count] = current;
count++;

temp = current->next;
free(current);
current = temp;
}

*h = NULL;
return (count);
}

