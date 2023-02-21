#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: print alphabet 10 times
 * Return: Always 0 (Success)
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
