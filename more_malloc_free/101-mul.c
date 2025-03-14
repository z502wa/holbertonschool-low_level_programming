#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - Checks if a string contains only digits.
 * @s: The string to check.
 *
 * Return: 1 if only digits, 0 otherwise.
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * print_error - Prints "Error" and exits with status 98.
 */
void print_error(void)
{
	char *error_msg = "Error\n";
	while (*error_msg)
	{
		_putchar(*error_msg);
		error_msg++;
	}
	exit(98);
}

/**
 * multiply - Multiplies two large numbers represented as strings.
 * @num1: First number as string.
 * @num2: Second number as string.
 */
void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1), len2 = _strlen(num2);
	int *result, i, j, carry, n1, n2, sum;

	result = calloc(len1 + len2, sizeof(int));
	if (!result)
		exit(98);

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		_putchar('0');
	else
		while (i < len1 + len2)
			_putchar(result[i++] + '0');

	_putchar('\n');
	free(result);
}

/**
 * main - Entry point, multiplies two numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();

	multiply(argv[1], argv[2]);
	return (0);
}
