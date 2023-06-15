#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_dlistint - function that print elements of a list
*@h: paramenter checked
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
