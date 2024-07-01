#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
int len = 0;
int start = 0;
char temp;

while (s[len] != '\0')
{
len++;
}

while (start < len - 1)
{
temp = s[start];
s[start] = s[len - 1];
s[len - 1] = temp;
start++;
len--;
}
}
