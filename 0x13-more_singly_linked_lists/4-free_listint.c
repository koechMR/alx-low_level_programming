#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *index;

	while (head != NULL)
	{
		index = head;
		head = head->next;
		free(index);
	}
}

