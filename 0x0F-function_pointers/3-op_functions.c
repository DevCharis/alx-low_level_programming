#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Subtracts one integer from another.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The difference between a and b.
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Divides one integer by another.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

