#include "lists.h"

/**
 *pop_listint - deletes the head node
 *@head: pointer
 *Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *num;
	int a;

	if (*head == NULL)
		return (0);
	num = *head;
	*head = (*head)->next;
	a = num->n;
	free(num);
	return (a);
}
