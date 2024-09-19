#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to the head of the doubly linked list
 * @n: value for the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

/* Allocate memory for the new node */
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node with data */
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;      /* Next of the new node is the current head */

/* If the list is not empty, update the previous pointer of the current head */
if (*head != NULL)
(*head)->prev = new_node;

/* Move the head to point to the new node */
*head = new_node;

return (new_node);   /* Return the new node */
}
