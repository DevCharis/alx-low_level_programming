#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list_t list.
 * @str: String to be added to the new node. This string is duplicated
 *       and stored in the node.
 *
 * Description: This function creates a new node, assigns the duplicated
 *              string to the node, and inserts the node at the beginning
 *              of the list. The new node's next pointer is set to the
 *              current head of the list, and the head pointer is updated
 *              to point to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */




list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
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
new_node->next = *head;
*head = new_node;
return (new_node);
}

