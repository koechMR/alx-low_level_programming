#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @seperator: printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int a;
	va_list arg_ptr;

	va_start(arg_ptr, n);

	for (a = 0; a < n; a++)
	{
		char *str = va_arg(arg_ptr, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (a < (n - 1) && seperator)
			printf("%s", seperator);
	}

	printf("\n");

	va_end(arg_ptr);
}
