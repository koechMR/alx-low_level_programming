#include "lists.h"

/**
*get_nodeint_at_index - function that returns nth node
*@head: pointer to the node
*@index: index of the node
*Return: pointer to the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current;
unsigned int i;

current = head;
i = 0;
while (current != NULL && i < index)
{
current = current->next;
i++;
}
return (current);
}
