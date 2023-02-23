#include "main.h"
/**
  *more_numbers-  prints 10 times the numbers, from 0 to 14
  *Return: void
  */
void more_numbers(void)
{
	char b, e;
	int a = 0;

	while (a < 10)
	{
		for (b = 0; b <= 14; b++)
		{
			e = b;
			if (b > 9)
			{
				_putchar('1');
				e = b % 10;
			}
			_putchar('0' + e);
		}

		_putchar('\n');
		a++;
	}
}
