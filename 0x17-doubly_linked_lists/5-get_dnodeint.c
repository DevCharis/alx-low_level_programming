#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: address of the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

/* Traverse the list to find the nth node */
while (head != NULL)
{
if (count == index)
return (head);
head = head->next;
count++;
}

return (NULL);  /* Return NULL if index is out of range */
}
