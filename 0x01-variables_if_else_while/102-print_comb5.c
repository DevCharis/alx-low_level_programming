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
int num1_hundreds = 0;
int num1_tens = 0;
int num1_units = 0;
int num2_hundreds = 0;
int num2_tens = 0;
int num2_units = 1;

while (num1_hundreds <= 9)
{
while (num1_tens <= 9)
{
while (num1_units <= 9)
{
while (num2_hundreds <= 9)
{
while (num2_tens <= 9)
{
while (num2_units <= 9)
{
if ((num1_hundreds < num2_hundreds) ||
(num1_hundreds == num2_hundreds &&
num1_tens < num2_tens) ||
(num1_hundreds == num2_hundreds &&
num1_tens == num2_tens &&
num1_units < num2_units))
{
putchar(num1_hundreds + '0');
putchar(num1_tens + '0');
putchar(num1_units + '0');
putchar(' ');
putchar(num2_hundreds + '0');
putchar(num2_tens + '0');
putchar(num2_units + '0');

if (!(num1_hundreds == 9 &&
num1_tens == 8 &&
num1_units == 9 &&
num2_hundreds == 9 &&
num2_tens == 9 &&
num2_units == 9))
{
putchar(',');
putchar(' ');
}
}
num2_units++;
}
num2_tens++;
num2_units = 0;
}
num2_hundreds++;
num2_tens = num1_tens + 1;
num2_units = 0;
}
num1_units++;
}
num1_tens++;
num1_units = 0;
}
num1_hundreds++;

putchar('\n');
return (0);
}
