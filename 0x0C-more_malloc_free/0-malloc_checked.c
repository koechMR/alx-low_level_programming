#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *z;

	z = malloc(b);

	if (z == NULL)
		exit(98);
	return (z);
}
