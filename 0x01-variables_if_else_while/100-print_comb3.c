#include <stdio.h>

/* main - Entry point
 *
 * Description: Prints all possible different combinations of two digits,
 * where numbers are separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int tens_digit = 0;
int units_digit = 1;

while (tens_digit < 9)
{
while (units_digit <= 9)
{
if (tens_digit != units_digit && tens_digit < units_digit)
{
putchar(tens_digit + '0');
putchar(units_digit + '0');

if (tens_digit != 8 || units_digit != 9)
{
putchar(',');
putchar(' ');
}
}
units_digit++;
}
tens_digit++;
units_digit = 0;
}
putchar('\n');
return (0);
}
