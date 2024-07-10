#include "main.h"
#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 * Description: This function uses recursion to print each character
 *              of the string until the null terminator is encountered.
 *              After printing the last character, it prints a new line.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
