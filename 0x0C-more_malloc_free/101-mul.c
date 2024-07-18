#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_valid_number - Checks if a string is a valid positive number.
 * @str: The string to check.
 *
 * Return: 1 if the string is a valid positive number, 0 otherwise.
 */
int is_valid_number(char *str)
{
while (*str)
{
if (!isdigit(*str))
return (0);
str++;
}
return (1);
}

/**
 * multiply_numbers - Multiplies two positive numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: A string representing the result of the multiplication.
 */
char *multiply_numbers(char *num1, char *num2)
{
int len1, len2, i, j, *result;
char *product;

if (*num1 == '0' || *num2 == '0')
return (strdup("0"));

len1 = strlen(num1);
len2 = strlen(num2);
result = calloc(len1 + len2, sizeof(int));
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

product = malloc(len1 + len2 + 1);
if (product == NULL)
{
free(result);
printf("Error\n");
exit(98);
}

i = 0;
while (i < len1 + len2 && result[i] == 0)
i++;

j = 0;
while (i < len1 + len2)
product[j++] = result[i++] + '0';

product[j] = '\0';
free(result);
return (product);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Description: This program multiplies two positive numbers
 *              passed as command line arguments in base 10.
 *              It prints the result followed by a new line.
 *              If the number of arguments is incorrect or if
 *              the arguments contain non-digit characters,
 *              it prints "Error" followed by a new line and
 *              exits with a status of 98.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
char *result;

if (argc != 3)
{
printf("Error\n");
return (98);
}

if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
{
printf("Error\n");
return (98);
}

result = multiply_numbers(argv[1], argv[2]);
printf("%s\n", result);
free(result);
return (0);
}

