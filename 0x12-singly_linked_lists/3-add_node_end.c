#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list_t list.
 * @str: String to be added to the new node. This string is duplicated
 *       and stored in the node.
 *
 * Description: This function creates a new node, assigns the duplicated
 *              string to the node, and inserts the node at the end of
 *              the list. If the list is empty, the new node becomes the
 *              head of the list. Otherwise, the function traverses the list
 *              to find the last node and updates its next pointer to point
 *              to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */




list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *last_node;
if (str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
last_node = *head;
while (last_node->next)
last_node = last_node->next;
last_node->next = new_node;
}
return (new_node);
}

