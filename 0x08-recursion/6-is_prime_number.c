#include "main.h"

int is_prime_number(int n);
int is_divisible(int num, int div);

/**
 * is_prime_number - return int if prime
 * is_divisible - return int if divisible
 * @n: input
 * Return: 1 if prime number and 0 otherwise
 */
int is_prime_number(int n)
{
int div = 2;

if (n <= 1)
return (0);
if (n >= 2 && n <= 3)
return (1);
return (is_divisible(n, div));
}
int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);

if (div == num / 2)
return (1);
return (is_divisible(num, div + 1));
}
