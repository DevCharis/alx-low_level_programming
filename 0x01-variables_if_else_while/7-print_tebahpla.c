#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'z';

    /* Loop to print alphabet in reverse */
while (letter >= 'a')
{
putchar(letter);
letter--;
}

putchar('\n'); /* Print new line */

return (0); /* Indicate successful termination */
}
