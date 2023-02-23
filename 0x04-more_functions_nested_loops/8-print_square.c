#include "main.h"
/**
  * print_square - function that prints a square
  *@n: code to be checked
  *Return: void
  */
void print_square(int n)
{
	int i = 0, hash;

	while (i < n && n > 0)
	{
		hash = 0;
		while (hash < n)
		{
			_putchar('#');
			hash++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
