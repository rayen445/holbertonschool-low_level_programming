#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data (n) of a dlistint_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head != NULL)
    {
        sum += head->n; /* Add the data of the current node to the sum */
        head = head->next; /* Move to the next node */
    }

    return sum;
}
