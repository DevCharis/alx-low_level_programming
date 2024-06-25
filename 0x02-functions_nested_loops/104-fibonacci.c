#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long fib1 = 1, fib2 = 2, next, sum = 2;
int count;

printf("%lu", fib1);
printf(", %lu", fib2);

for (count = 3; count <= 98; count++)
{
next = fib1 + fib2;
if (next % 2 == 0)
sum += next;
printf(", %lu", next);
fib1 = fib2;
fib2 = next;
}

printf("\n%lu\n", sum);
return (0);
}
