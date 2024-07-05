#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to the result, or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, max_len = 0;
	int i, j;

	/* Calculate lengths of n1 and n2 */
	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	/* Determine the maximum length of the result */
	max_len = (len1 > len2) ? len1 : len2;

	/* Check if size_r is sufficient to store the result */
	if (max_len + 1 > size_r)
	  return (0);

	/* Start adding from the least significant digits */
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		r[max_len--] = (sum % 10) + '0';
		carry = sum / 10;
	}

	/* Null-terminate the result string */
	r[len1 > len2 ? len1 : len2] = '\0';

	return (r);
}
