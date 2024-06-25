#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
    int i;
    char ch;

    for (i = 0; i < 10; i++)
    {
        ch = 'a';
        while (ch <= 'z')
        {
            _putchar(ch);
            ch++;
        }
        _putchar('\n');
    }
}
