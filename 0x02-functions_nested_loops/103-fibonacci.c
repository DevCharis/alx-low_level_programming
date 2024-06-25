#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int sum = 0;
unsigned long fib1 = 1, fib2 = 2, next;

while (fib1 <= 4000000)
{
if (fib1 % 2 == 0)
sum += fib1;
next = fib1 + fib2;
fib1 = fib2;
fib2 = next;
}

printf("%d\n", sum);
return (0);
}
