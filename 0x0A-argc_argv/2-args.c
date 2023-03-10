#include <stdio.h>
#include "main.h"
/**
 * main - Prints all arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)

	printf("%s\n", argv[x]);

	return (0);
}
