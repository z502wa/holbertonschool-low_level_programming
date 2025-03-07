#include "main.h"

/**
 * check_prime - Helper function to determine if a number is prime
 * @n: The number to check
 * @divisor: The divisor to test divisibility
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{
	if (divisor * divisor > n) /* Base case: no divisors found */
	{
		return (1);
	}
	if (n % divisor == 0) /* If divisible, not a prime */
	{
		return (0);
	}

	/* Recursive call with the next divisor */
	return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1) /* Negative numbers, 0, and 1 are not prime */
	{
		return (0);
	}
	if (n == 2) /* 2 is the smallest prime number */
	{
		return (1);
	}

	/* Start checking from divisor 2 */
	return (check_prime(n, 2));
}
