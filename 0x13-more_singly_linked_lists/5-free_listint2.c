#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Double pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;

if (!head)
return;

while (*head)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}

*head = NULL;
}

