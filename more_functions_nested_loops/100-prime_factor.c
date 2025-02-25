#include <stdio.h>
#include <math.h>

/**
 * main - إيجاد أكبر عامل أولي للعدد 612852475143
 *
 * Return: دائمًا 0 (نجاح)
 */
int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long largest = 0;

	/* تقسيم العدد حتى يصبح عددًا أوليًا */
	while (num > 1)
	{
		while (num % factor == 0)
		{
			largest = factor;
			num /= factor;
		}
		factor++;
	}

	/* طباعة أكبر عامل أولي */
	printf("%ld\n", largest);
	return (0);
}
