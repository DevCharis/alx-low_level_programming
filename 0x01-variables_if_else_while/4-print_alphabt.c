#include <stdio.h>

/**
*main-Entry point
*
*Description:Prints the alphabet in lowercase excluding 'q' and 'e'
*using the putchar function twice.
*
*Return:Always 0 (Success)
*/
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}

putchar('\n');
return (0);
}
