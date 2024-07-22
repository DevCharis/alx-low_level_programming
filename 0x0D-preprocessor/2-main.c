#include <stdio.h>
/**
 * main - Print the name of the file it was compiled from.
 *
 * Description: This program demonstrates the use of the __FILE__ macro,
 * which is provided by the C preprocessor. The __FILE__ macro expands to
 * the name of the current source file as a string literal. This allows
 * the program to print the name of the file from which it was compiled.
 *
 * Compilation Command:
 * gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
 *
 * Execution Command:
 * ./c
 *
 * Example Output:
 * 2-main.c
 *
 * Return: Always 0.
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}

