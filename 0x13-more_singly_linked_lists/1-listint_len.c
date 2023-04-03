#include "lists.h"
#include <stdio.h>
/**
*listint_len - return the  number of elements
*@h: paramenter checked
*Return: number of elementsin list
*/

size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h != NULL)
{
num++;
h = h->next;
}
return (num);
}
