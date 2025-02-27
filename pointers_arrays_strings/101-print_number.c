#include "main.h"

/**
 * print_number - Prints an integer using only _putchar.
 * @n: The integer to print.
 *
 * Description: This function prints an integer character by character,
 * handling negative numbers properly without causing overflow.
 */
void print_number(int n)
{
	int divisor = 1;
	int temp = n;

	/* Handle INT_MIN case separately */
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		temp = 147483648; /* Convert remaining part to positive */
	}
	else if (n < 0)
	{
		_putchar('-');
		temp = -temp;
	}

	/* Find the highest power of 10 */
	while (temp / divisor >= 10)
	{
		divisor *= 10;
	}

	/* Print digits one by one */
	while (divisor > 0)
	{
		_putchar((temp / divisor) + '0');
		temp %= divisor;
		divisor /= 10;
	}
}
