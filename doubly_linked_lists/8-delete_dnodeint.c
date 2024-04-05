#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a linked list
 * @head: Pointer to the pointer to the head node
 * @index: Index of the node to be deleted
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (!head || !*head) /* If head is NULL or list is empty */
		return (-1);

	if (index == 0) /* If first node needs to be deleted */
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	while (index > 0 && temp != NULL) /* Traverse to the node at index */
	{
		temp = temp->next;
		index--;
	}

	if (!temp) /* If index is out of range */
		return (-1);

	if (temp->next) /* If node is not the last node */
		temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}
