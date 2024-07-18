#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_number - Checks if a string represents a valid number.
 * @str: The string to check.
 *
 * Return: 1 if valid, 0 otherwise.
 */
int is_valid_number(char *str)
{
while (*str)
{
if (!isdigit(*str))
{
return (0);
}
str++;
}
return (1);
}

/**
 * multiply_numbers - Multiplies two positive numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The result of the multiplication as a string.
 */
char *multiply_numbers(char *num1, char *num2)
{
int len1 = 0, len2 = 0, len_result, i, j;
char *result;

if (!is_valid_number(num1) || !is_valid_number(num2))
{
printf("Error\n");
exit(98);
}

while (num1[len1])
{
len1++;
}
while (num2[len2])
{
len2++;
}

len_result = len1 + len2;
result = calloc(len_result + 1, sizeof(char));
if (result == NULL)
{
printf("Error\n");
exit(98);
}

for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
result[i + j] += result[i + j + 1] / 10;
result[i + j + 1] %= 10;
}
}

i = 0;
while (i < len_result && result[i] == 0)
{
i++;
}

if (i == len_result)
{
free(result);
return (strdup("0"));
}

for (j = 0; i < len_result; i++, j++)
{
result[j] = result[i] + '0';
}
result[j] = '\0';

return (result);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
char *num1, *num2, *result;

if (argc != 3)
{
printf("Error\n");
return (98);
}

num1 = argv[1];
num2 = argv[2];

result = multiply_numbers(num1, num2);

printf("%s\n", result);

free(result);

return (0);
}

