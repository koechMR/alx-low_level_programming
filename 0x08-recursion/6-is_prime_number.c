#include "main.h"

int check_prime(int i, int n);
/**
 * check_prime - checks  if number is prime
 * @n: check if it is a prime number
 * @i: if possible prime number
 * Return: 1 if prime, 0 otherwise
 */

int check_prime(int i, int n)
{

	if (n < 2)

		return (0);

	if (n % i == 0)

		return (0);

	if (i > n / 2)

		return (1);

	return (check_prime(i + 1, n));

}

/**
 * is_prime_number -  1 if the input integer is a prime number
 * 0 otherwise
 * @n: the number to be checked
 * Return: return 1 or 0
 */

int is_prime_number(int n)
{

	if (n == 2)

		return (1);

	return (check_prime(2, n));

}
