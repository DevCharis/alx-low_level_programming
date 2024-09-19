#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to the head of the doubly linked list
 * @n: value for the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node with data */
new_node->n = n;
new_node->next = NULL;

/* If the list is empty, make the new node the head */
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

/* Otherwise, traverse to the end of the list */
temp = *head;
while (temp->next != NULL)
temp = temp->next;

/* Update the last node's next to the new node */
temp->next = new_node;
new_node->prev = temp;

return (new_node);  /* Return the new node */
}
