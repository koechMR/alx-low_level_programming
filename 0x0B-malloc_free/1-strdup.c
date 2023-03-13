#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_strdup - returns a pointer to a newly allocated space
*@str:  string being checked
*Return: NULL if str = NULL
*on succsess return a pointer
*/

char *_strdup(char *str)
{
char *num;
int name, len = 0;

if (str == NULL)
return (NULL);

for (name = 0; str[name]; name++)
len++;

num = malloc(sizeof(char) * (len + 1));

if (num == NULL)

return (NULL);

for (name = 0; str[name]; name++)
num[name] = str[name];

num[len] = '\0';

return (num);
}
