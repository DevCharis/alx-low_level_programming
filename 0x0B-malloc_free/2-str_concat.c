#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space in memory containing
 *         the contents of s1 followed by s2, and null terminated.
 *         NULL on failure or if both s1 and s2 are NULL.
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i, j, len1 = 0, len2 = 0;

if (s1 != NULL)
{
for (len1 = 0; s1[len1]; len1++);
}
if (s2 != NULL)
{
for (len2 = 0; s2[len2]; len2++);
}

concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)
{
return (NULL);
}

for (i = 0; i < len1; i++)
{
concat[i] = s1[i];
}
for (j = 0; j < len2; j++)
{
concat[i + j] = s2[j];
}
concat[i + j] = '\0';

return (concat);
}
