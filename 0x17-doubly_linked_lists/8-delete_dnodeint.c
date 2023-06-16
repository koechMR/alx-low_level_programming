#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at a specific index
 *               in a doubly linked list.
 * @head: A double pointer to the head of the doubly linked list.
 * @index: The index of the node to delete. Index starts at 0.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next->next;
	free(current->next);
	current->next = temp;
	if (temp != NULL)
		temp->prev = current;
	return (1);
}
