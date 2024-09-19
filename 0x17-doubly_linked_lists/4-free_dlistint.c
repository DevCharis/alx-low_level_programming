#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head of the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

/* Traverse and free each node */
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
