#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data (n) of a doubly linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

/* Traverse the list and sum up the data */
while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);  /* Return the sum */
}
