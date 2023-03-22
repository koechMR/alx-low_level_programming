#include "function_pointers.h"
#include <stddef.h>

/**
* print_name - prints a name
* @name: this is the first parameter
* @f : pointer to a function that prints name
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
