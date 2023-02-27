#include "main.h"
/**
  *print_rev - print in reverse
  *@s: parameter being checked
  *Return: string
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
		a++;
	while (a--)
		_putchar(s[a]);
	_putchar('\n');
}
