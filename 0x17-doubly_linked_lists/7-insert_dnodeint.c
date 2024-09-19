#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int count = 0;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

/* Special case: insert at the beginning */
if (idx == 0)
return (add_dnodeint(h, n));

temp = *h;

/* Traverse the list to find the correct position */
while (temp != NULL && count < idx - 1)
{
temp = temp->next;
count++;
}

/* If the index is out of range */
if (temp == NULL && idx != 0)
return (NULL);

/* Insert the new node */
new_node->next = temp->next;
if (temp->next != NULL)
temp->next->prev = new_node;
temp->next = new_node;
new_node->prev = temp;

return (new_node);  /* Return the new node */
}
