#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count;
unsigned long fib1 = 1, fib2 = 2, next;

for (count = 0; count < 50; count++)
{
if (count == 0)
printf("%lu", fib1);
else if (count == 1)
printf(", %lu", fib2);
else
{
next = fib1 + fib2;
printf(", %lu", next);
fib1 = fib2;
fib2 = next;
}
}
printf("\n");
return (0);
}
