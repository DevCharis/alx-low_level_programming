#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
int i = 0, sign = 1;
unsigned int result = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
if (result > (2147483647 - (s[i] - '0')) / 10)
{
result = (sign == 1) ? 2147483647 : 2147483648;
break;
}
result = result * 10 + (s[i] - '0');
}
else if (result > 0)
break;
i++;
}
return (sign == 1) ? result : -result;
}
