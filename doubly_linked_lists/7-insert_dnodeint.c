#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index of the list where the new node should be added.
 * @n: Data to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (h == NULL) /* Check if head is NULL */
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* Check if malloc fails */
		return (NULL);

	new_node->n = n; /* Assign data to the new node */
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0) /* Insert at the beginning of the list */
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;

	if (temp == NULL) /* If idx is out of range */
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
