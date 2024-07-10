#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
return (palindrome_helper(s, 0, len - 1));
}

/**
 * palindrome_helper - helper function to check for palindrome
 * @s: string to be checked
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int palindrome_helper(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (palindrome_helper(s, start + 1, end - 1));
}
