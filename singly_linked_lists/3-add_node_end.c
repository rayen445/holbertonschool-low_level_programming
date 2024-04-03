#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be copied into the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;
    list_t *last = *head;
    unsigned int len = 0;

    /* Calculate the length of the string */
    while (str[len])
        len++;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    /* Duplicate the string */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Set the length of the string */
    new_node->len = len;

    /* Since the new node will be added at the end, set its next to NULL */
    new_node->next = NULL;

    /* If the list is empty, make the new node as the head */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* Traverse the list to find the last node */
    while (last->next != NULL)
        last = last->next;

    /* Append the new node after the last node */
    last->next = new_node;

    return (new_node);
}
