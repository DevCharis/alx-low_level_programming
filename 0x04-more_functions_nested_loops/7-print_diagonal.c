#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character '\' should be printed
* Description: If n is 0 or less, the function prints only '\n'. Otherwise,
* it prints a diagonal line of length n using
*'\' characters followed by a newline.
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int spaces, i;

for (i = 0; i < n; i++)
{
for (spaces = 0; spaces < i; spaces++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
