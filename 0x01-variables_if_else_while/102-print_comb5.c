#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers,
 * where numbers are separated by a space and combinations by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1, num2;

    num1 = 0;

    while (num1 <= 99)
    {
        num2 = num1 + 1;
        while (num2 <= 99)
        {
            putchar(num1 / 10 + '0');  /* Tens digit of num1 */
            putchar(num1 % 10 + '0');  /* Units digit of num1 */
            putchar(' ');
            putchar(num2 / 10 + '0');  /* Tens digit of num2 */
            putchar(num2 % 10 + '0');  /* Units digit of num2 */

            if (!(num1 == 98 && num2 == 99))  /* Don't print comma and space after last combination */
            {
                putchar(',');
                putchar(' ');
            }

            num2++;
        }
        num1++;
    }

    putchar('\n');
    return (0);
}
