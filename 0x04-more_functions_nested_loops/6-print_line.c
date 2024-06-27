#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: number of times the character '_' should be printed
* Description: If n is 0 or less, the function prints only '\n'. Otherwise,
* it prints n underscores followed by a newline character '\n'.
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
