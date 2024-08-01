#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list_t list.
 *
 * Description: This function iterates through each node in the singly
 *              linked list, printing the length and string of each node.
 *              If the string is NULL, it prints (nil). Each node's string
 *              is followed by a newline. The function returns the number of
 *              nodes in the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
count++;
h = h->next;
}
return (count);
}

