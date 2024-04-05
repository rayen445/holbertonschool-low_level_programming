#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL) /* If the list is empty */
		return (-1);

	if (index == 0) /* If node to delete is the first node */
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse the list to find the node at the specified index */
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	if (current == NULL) /* If index is out of range */
		return (-1);

	/* Remove the node at the specified index */
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);

	return (1);
}
