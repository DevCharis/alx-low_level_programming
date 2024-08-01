#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list_t list.
 *
 * Description: This function iterates through the list, freeing each node's
 *              string and then the node itself.
 *              It ensures that all dynamically
 *              allocated memory is properly released to prevent memory leaks.
 */
void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}

