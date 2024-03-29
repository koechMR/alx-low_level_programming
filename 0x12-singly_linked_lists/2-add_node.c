#include "lists.h"
#include <string.h>
/**
 * add_node - funct that add new node at the beginning of a list_t list
 * @head: pointer
 * @str: string to be checked
 * Return: address of element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);

}
