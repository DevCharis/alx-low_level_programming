#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *d = dest;
while (*d != '\0')
{
d++;
}
while (*src != '\0')
{
*d = *src;
d++;
src++;
}
*d = '\0';
return (dest);
}
