#include <stdio.h>

/** 
 * main - Entry point
 * Description: Prints all single digit numbers of base 10 starting from 0,
 *              followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;
/* Loop to print digits from 0 to 9 */
while (digit <= 9)
{
putchar(digit + '0'); /* Convert digit to ASCII and print */
digit++;              /* Move to the next digit */
}

putchar('\n'); /* Print new line */

return (0); /* Indicate successful termination */
}
