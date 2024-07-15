#include "main.h"
#include <stdlib.h>

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

for (i = 0, k = 0; i < word_count; i++)
{
while (*str == ' ')
str++;
len = 0;
while (str[len] != ' ' && str[len] != '\0')
len++;
word = malloc((len + 1) * sizeof(char));
if (word == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
for (j = 0; j < len; j++)
word[j] = str[j];
word[j] = '\0';
words[k++] = word;
str += len;
}
words[k] = NULL;
return (words);
}
