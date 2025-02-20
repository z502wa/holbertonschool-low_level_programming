#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, next;
	unsigned long int a_half1, a_half2, b_half1, b_half2;
	unsigned long int next_half1, next_half2;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 2; count < 92; count++)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}

	a_half1 = a / 10000000000;
	a_half2 = a % 10000000000;
	b_half1 = b / 10000000000;
	b_half2 = b % 10000000000;

	for (; count < 98; count++)
	{
		next_half1 = a_half1 + b_half1;
		next_half2 = a_half2 + b_half2;

		if (next_half2 > 9999999999)
		{
			next_half1 += 1;
			next_half2 %= 10000000000;
		}

		printf(", %lu%010lu", next_half1, next_half2);
		a_half1 = b_half1;
		a_half2 = b_half2;
		b_half1 = next_half1;
		b_half2 = next_half2;
	}

	printf("\n");
	return (0);
}
