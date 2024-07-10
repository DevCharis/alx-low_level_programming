#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helper function to find square root
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sqrt_helper(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (sqrt_helper(n, i + 1));
}
