#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index of the list where the new node should be added
 * @n: Value to store in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp = *h;
    unsigned int i = 0;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;

    if (!*h && idx == 0)
    {
        new_node->prev = NULL;
        new_node->next = NULL;
        *h = new_node;
        return (new_node);
    }

    while (temp)
    {
        if (i == idx)
        {
            new_node->prev = temp->prev;
            new_node->next = temp;
            if (temp->prev)
                temp->prev->next = new_node;
            else
                *h = new_node;
            temp->prev = new_node;
            return (new_node);
        }
        temp = temp->next;
        i++;
    }

    if (i == idx)
    {
        free(new_node);
        return (add_dnodeint_end(h, n));
    }

    free(new_node);
    return (NULL);
}
