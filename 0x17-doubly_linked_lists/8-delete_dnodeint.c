#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a doubly linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int count = 0;

/* If the list is empty */
if (*head == NULL)
return (-1);

/* Special case: delete the first node */
if (index == 0)
{
*head = temp->next;
if (temp->next != NULL)
temp->next->prev = NULL;
free(temp);
return (1);
}

/* Traverse to the node to be deleted */
while (temp != NULL && count < index)
{
temp = temp->next;
count++;
}

/* If the node does not exist */
if (temp == NULL)
return (-1);

/* Unlink the node and free it */
if (temp->next != NULL)
temp->next->prev = temp->prev;
if (temp->prev != NULL)
temp->prev->next = temp->next;
free(temp);

return (1);  /* Return 1 on success */
}
