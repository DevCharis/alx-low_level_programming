#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be reversed
 *
 * Description: This function uses recursion to reverse each word
 * of the string until the null terminator is encountered.
 * After reversing the last word, it prints the reversed string.
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
