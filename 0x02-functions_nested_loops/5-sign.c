#include "main.h"
/**
  * print_sign - a fuction that prints the signof a number
  *@n : parameter to be checked
  *Return: 1 and + if  greater than 0 and 0 if 0 and -1 if less than 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return ('0');
}
