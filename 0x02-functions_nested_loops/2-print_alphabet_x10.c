#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 *
 * Description: Uses nested loops to achieve the desired output.
 */
void print_alphabet_x10(void)
{
    int i, ch;

    for (i = 0; i < 10; i++)
    {
        for (ch = 'a'; ch <= 'z'; ch++)
        {
            _putchar(ch); // First use of _putchar
        }
        _putchar('\n'); // Second use of _putchar
    }
}
