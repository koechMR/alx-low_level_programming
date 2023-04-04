#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index of the list where the new node should be added
 * @n: data (n) of the new node
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *letter, *num = *head;
	unsigned int node;

	letter = malloc(sizeof(listint_t));
	if (letter == NULL)
		return (NULL);

	letter->n = n;

	if (idx == 0)
	{
		letter->next = num;
		*head = letter;
		return (letter);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (num == NULL || num->next == NULL)
			return (NULL);

		num = num->next;
	}

	letter->next = num->next;
	num->next = letter;

	return (letter);
}
