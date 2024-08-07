#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Integer to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *current = *head;

if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (!*head)
{
*head = new_node;
return (new_node);
}

while (current->next)
current = current->next;

current->next = new_node;

return (new_node);
}

