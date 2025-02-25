#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100, replacing multiples of 3 and 5
 *
 * Description: Prints numbers from 1 to 100.
 * Multiples of 3 are replaced with "Fizz".
 * Multiples of 5 are replaced with "Buzz".
 * Multiples of both 3 and 5 are replaced with "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		/* Ensure space is printed between words/numbers */
		if (i != 100)
			printf(" ");
	}

	/* Print a new line at the end */
	printf("\n");

	return (0);
}
