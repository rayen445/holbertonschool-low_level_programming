#include "lists.h"
#include <stdio.h>  // Add this line to include the stdio header

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t nodes = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);  // Update this line to use printf
        h = h->next;
        nodes++;
    }

    return (nodes);
}
