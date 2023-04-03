#include "lists.h"
#include <stdio.h>

/**
*add_nodeint - fuction that adds a new node
*@head: pointer
*@n: parameter passed
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_class;
new_class = malloc(sizeof(listint_t));
if (new_class == NULL)
return (NULL);
new_class->n = n;
new_class->next = *head;
*head = new_class;
return (new_class);
}
