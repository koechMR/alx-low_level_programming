/*
 * File: 2-print_alphabet.c
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
