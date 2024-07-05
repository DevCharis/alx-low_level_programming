#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy from src
 * 
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *d = dest;
while (n > 0 && *src != '\0')
{
*d = *src;
d++;
src++;
n--;
}
while (n > 0)
{
*d = '\0';
d++;
n--;
}
return (dest);
}
