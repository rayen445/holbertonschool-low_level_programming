#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/* Structs */
/**
 * struct dlistint_s - Doubly linked list node structure
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 *
 * Description: Doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Prototypes */
size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
int sum_dlistint(dlistint_t *head);

#endif /* LISTS_H */
