#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - fuction that creates a char array
*@size: parameter to check
*@c: character to look for
* Return: NULL is size = 0
* or return pointer to array or NULL if fails
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;

return (arr);
}
