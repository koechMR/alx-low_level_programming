#include "main.h"
/**
 * factorial - factorial a number
 * @n: integer
 * Return: If n is lower than 0,
 * the function should return -1 to indicate an error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);

	return (result);
}
