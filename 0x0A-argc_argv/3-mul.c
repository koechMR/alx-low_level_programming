#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - It takes first two integer arguments and prints the product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int x, z;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		z = 1;

		for (x = 1; x < 3; x++)
		z *= atoi(argv[x]);

		printf("%d\n", z);
	}

	return (0);
}
