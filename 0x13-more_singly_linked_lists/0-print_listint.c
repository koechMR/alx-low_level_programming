#include "lists.h"
#include <stdio.h>
/**
*print_listint - print all the elemensts
*@h: pointer to the head of the list
*Return: then number of the nodes in the list
*/

size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
