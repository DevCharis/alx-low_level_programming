#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a separator and a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: This function prints numbers separated by the specified
 * separator string. If the separator is NULL, it is not printed.
 * A new line is printed at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++) {
printf("%d", va_arg(args, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}

