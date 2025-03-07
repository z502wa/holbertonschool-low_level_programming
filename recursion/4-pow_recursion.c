#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number whose factorial is to be calculated
 *
 * Return: Factorial of n, -1 if n is negative (error case)
 */
int factorial(int n)
{
	if (n < 0) /* Error case: negative number */
	{
		return (-1);
	}
	if (n == 0) /* Base case: factorial of 0 is 1 */
	{
		return (1);
	}

	/* Recursive call: n * factorial of (n - 1) */
	return (n * factorial(n - 1));
}
