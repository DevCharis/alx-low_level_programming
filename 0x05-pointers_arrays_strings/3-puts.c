#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string to be printed
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putschar(*str);
str++;
}
_putschar('\n');
}
