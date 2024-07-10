#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to be checked
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function to check for prime numbers
 * @n: number to be checked
 * @i: iterator
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (is_prime_helper(n, i + 1));
}
