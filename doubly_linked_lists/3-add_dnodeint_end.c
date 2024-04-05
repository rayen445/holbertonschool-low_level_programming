#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Data to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (head == NULL) /* Check if head is NULL */
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* Check if malloc fails */
		return (NULL);

	new_node->n = n; /* Assign data to the new node */
	new_node->next = NULL;

	if (*head == NULL) /* If the list is empty, new node becomes the head */
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL) /* Traverse the list until the end */
		temp = temp->next;

	temp->next = new_node; /* Add the new node at the end */
	new_node->prev = temp;

	return (new_node);
}
