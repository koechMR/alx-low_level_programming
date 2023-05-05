#include "main.h"
#include <stdio.h>
/**
 *print_binary - prints the binary representation of a number
 *@n: number to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			putchar('0');
		}
		mask = mask >> 1;
	}
	if (flag == 0)
	{
		putchar('0');
	}
}
