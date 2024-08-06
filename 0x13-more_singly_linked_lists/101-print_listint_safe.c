#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
const listint_t *nodes[1024];
size_t count = 0;
size_t index;

while (current != NULL)
{
for (index = 0; index < count; index++)
{
if (nodes[index] == current)
{
printf("-> [%p] %d\n", (void *)current, current->n);
return (count);
}
}

nodes[count] = current;
count++;

printf("[%p] %d\n", (void *)current, current->n);
current = current->next;
}

return (count);
}

