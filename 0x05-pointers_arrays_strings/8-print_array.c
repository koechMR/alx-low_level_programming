#include "main.h"
#include <stdio.h>
/**
  *print_array - print array
  *@a: parameter
  *@n: parameter
  *Return: array of a and n
  */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < (n - 1); c++)
		printf("%d, ", a[c]);

	if (c == (n - 1))
		printf("%d", a[n - 1]);

	printf("\n");
}
