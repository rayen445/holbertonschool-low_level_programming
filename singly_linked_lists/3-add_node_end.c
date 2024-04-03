#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_node - Creates a new node.
 * @str: String to be copied into the new node.
 * @len: Length of the string.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
static list_t *create_node(const char *str, unsigned int len)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	return (new_node);
}

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

	while (str[len])
		len++;

	new_node = create_node(str, len);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
