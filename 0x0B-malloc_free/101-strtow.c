#include "main.h"
#include <stdlib.h>

/**
* count_words - helper function to count the number of words in a string
* @str: string to evaluate
* Return: number of words
*/
int count_words(char *str)
{
int count = 0, in_word = 0;

while (*str)
{
if (*str == ' ')
in_word = 0;
else if (in_word == 0)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}

/**
* strtow - splits a string into words
* @str: string to split
* Return: pointer to an array of strings (words)
*/
char **strtow(char *str)
{
char **words, *word;
int i, j, k, len, word_count;

if (str == NULL || *str == '\0')
return (NULL);

word_count = count_words(str);
if (word_count == 0)
return (NULL);

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i
