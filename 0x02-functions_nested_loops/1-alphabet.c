#include "main.h"

/**
  * print_alphabet -Entry point
  * a fuction tha prints the alphabet in lower case
  * Return void
  */

void print_alphabet(void)
{
	char name = 'a';

	while (name <= 'z')
	{
		_putchar(name);
		name++;
	}
	_putchar('\n');
}
