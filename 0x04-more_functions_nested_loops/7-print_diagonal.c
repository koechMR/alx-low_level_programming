#include "main.h"
/**
  *print_diagonal - diagonal lines of backslaches
  *@n: parameter being checked
  *Return: void
  */
void print_diagonal(int n)
{
	int a = 0, name;

	while (a < n && n > 0)
	{
		name = 0;
		while (name < a)
		{
			_putchar(' ');
			name++;
		}

		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
