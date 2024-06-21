#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits,
 * where numbers are separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int hundreds_digit = 0;
int tens_digit = 1;
int units_digit = 2;

while (hundreds_digit < 8)
{
while (tens_digit <= 8)
{
while (units_digit <= 9)
{
if (hundreds_digit != tens_digit &&
hundreds_digit != units_digit &&
tens_digit != units_digit &&
hundreds_digit < tens_digit &&
tens_digit < units_digit)
{
putchar(hundreds_digit + '0');
putchar(tens_digit + '0');
putchar(units_digit + '0');

if (hundreds_digit != 7 || tens_digit != 8 || units_digit != 9)
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
hundreds_digit++;
tens_digit = 0;
units_digit = 0;
}

putchar('\n');
return (0);
}
