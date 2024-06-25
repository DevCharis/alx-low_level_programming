#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long long fib1 = 1, fib2 = 2, next;
int count;

printf("%llu, %llu", fib1, fib2);

for (count = 3; count <= 98; count++)
{
next = fib1 + fib2;
printf(", %llu", next);
fib1 = fib2;
fib2 = next;
}

printf("\n");

return (0);
}
