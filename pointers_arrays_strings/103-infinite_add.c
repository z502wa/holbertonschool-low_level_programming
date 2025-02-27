#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: First number as a string.
 * @n2: Second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Buffer size.
 *
 * Return: Pointer to the result, or 0 if result cannot fit in buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len1 = 0, len2 = 0, carry = 0, sum, digit1, digit2;

	/* Find the length of n1 and n2 */
	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	/* Ensure buffer is large enough */
	if (size_r <= (len1 > len2 ? len1 : len2) + 1)
		return (0);

	r[size_r - 1] = '\0'; /* Null terminate result */
	k = size_r - 2;

	/* Perform addition from the last digits */
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--, k--)
	{
		if (k < 0)
			return (0);
		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = digit1 + digit2 + carry;
		r[k] = (sum % 10) + '0';
		carry = sum / 10;
	}

	return (r + k + 1);
}
