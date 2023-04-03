#include "lists.h"

/**
 * add_nodeint_end - fuction that adds new node
 *@head: pointer to the first node
 *@n: parameter being passed
 *Return: the address of the new element,
 * or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *num, *index;

	num = malloc(sizeof(listint_t));
	if (num == NULL)
		return (NULL);

	num->n = n;
	num->next = NULL;
	if (*head == NULL)
	{
		*head = num;
		return (num);
	}
	index = *head;
	while (index->next != NULL)
	{
		index = index->next;
	}
	index->next = num;

	return (num);
}
