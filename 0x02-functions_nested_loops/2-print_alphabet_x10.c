#include "main.h"

/**
  * Entry point - print_alphabet_x10
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
  *
  * Return:void
  */
void print_alphabet_x10(void)
{
	char name;
	int g = 0;

	while (g <= 9)
	{
		for (name = 'a'; name <= 'z'; name++)
		{
			_putchar(name);
		}

		_putchar('\n');
		g++;
	}
}
