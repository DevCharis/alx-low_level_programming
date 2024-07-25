#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_all - Prints anything based on the format provided.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: c - char, i - integer, f - float, s - char * (if the string
 * is NULL, print (nil) instead). Any other char is ignored.
 */

void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str, *sep = "";

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", sep, str);
break;
}
sep = ", ";
i++;
}

va_end(args);
printf("\n");
}

