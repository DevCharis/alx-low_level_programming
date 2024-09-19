#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Structure for a doubly linked list node */
typedef struct dlistint_s
{
    int n;  /* Data */
    struct dlistint_s *prev;  /* Pointer to the previous node */
    struct dlistint_s *next;  /* Pointer to the next node */
} dlistint_t;

/* Function prototypes */

/* Task 0: Prints all the elements of a doubly linked list */
size_t print_dlistint(const dlistint_t *h);

/* Task 1: Returns the number of elements in a doubly linked list */
size_t dlistint_len(const dlistint_t *h);

/* Task 2: Adds a new node at the beginning of a doubly linked list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/* Task 3: Adds a new node at the end of a doubly linked list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/* Task 4: Frees a doubly linked list */
void free_dlistint(dlistint_t *head);

/* Task 5: Returns the nth node of a doubly linked list */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* Task 6: Returns the sum of all data (n) of a doubly linked list */
int sum_dlistint(dlistint_t *head);

/* Task 7: Inserts a new node at a given position in a doubly linked list */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* Task 8: Deletes the node at index of a doubly linked list */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
