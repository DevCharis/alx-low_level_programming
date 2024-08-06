#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t linked
 * list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *node_to_delete;
unsigned int i = 0;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
node_to_delete = *head;
*head = (*head)->next;
free(node_to_delete);
return (1);
}

temp = *head;
while (temp != NULL && i < index - 1)
{
temp = temp->next;
i++;
}

if (temp == NULL || temp->next == NULL)
return (-1);

node_to_delete = temp->next;
temp->next = node_to_delete->next;
free(node_to_delete);

return (1);
}

