#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 *
 * Description: Uses _putchar function twice to achieve the desired output.
 */
void print_alphabet(void)
{
    int ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }
    _putchar('\n'); // Second use of _putchar
}
