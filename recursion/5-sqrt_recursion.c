#include "main.h"

/**
 * find_sqrt - Helper function to find the natural square root recursively
 * @n: The number whose square root is being calculated
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if it does not exist
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n) /* Base case: found the square root */
	{
		return (guess);
	}
	if (guess * guess > n) /* If square exceeds n, no natural root exists */
	{
		return (-1);
	}

	/* Recursive call increasing the guess */
	return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number whose square root is to be found
 *
 * Return: The natural square root of n, or -1 if it does not exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* If n is negative, return -1 (error case) */
	{
		return (-1);
	}
	if (n == 0 || n == 1) /* Base cases: sqrt(0) = 0, sqrt(1) = 1 */
	{
		return (n);
	}

	/* Call helper function to find square root */
	return (find_sqrt(n, 1));
}
