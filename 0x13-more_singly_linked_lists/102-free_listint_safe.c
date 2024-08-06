#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to the address of the head of the list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current;
listint_t *temp;
listint_t *loop_node = NULL;

if (!h || !*h)
return (0);

while (*h)
{
current = *h;
count++;

temp = *h;
while (temp != current)
{
if (temp == current)
{
loop_node = current;
break;
}
temp = temp->next;
}

if (loop_node)
{
printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
return (count);
}

*h = (*h)->next;
free(current);
}

return (count);
}

