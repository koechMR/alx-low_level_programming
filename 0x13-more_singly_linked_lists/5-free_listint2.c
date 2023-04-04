#include "lists.h"

/**
 *free_listint2 - fuction that frees a listint_t list
 *@head: pointer
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *index;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		index = *head;
		*head = (*head)->next;
		free(index);
	}
	*head = NULL;
}
