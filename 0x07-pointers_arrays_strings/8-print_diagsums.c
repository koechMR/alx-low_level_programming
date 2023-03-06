#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int name, sum1 = 0, sum2 = 0;

	for (name = 0; name < size; name++)
	{
		sum1 += a[name];
		a += size;
	}

	a -= size;

	for (name = 0; name < size; name++)
	{
		sum2 += a[name];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
