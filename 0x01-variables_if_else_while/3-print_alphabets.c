/*
 * File: 3-print_alphabets.c
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
