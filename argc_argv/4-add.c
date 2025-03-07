#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - Checks if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if string is a number, 0 otherwise
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9') /* Check if character is not a digit */
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Entry point, adds positive numbers from command-line arguments
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 *
 * Return: 0 if successful, 1 if any argument is not a number
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* If no numbers are provided, print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through arguments, validate, and add them */
	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i])) /* If argument is not a number, print error */
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]); /* Convert argument to int and add to sum */
	}

	/* Print the total sum */
	printf("%d\n", sum);
	return (0);
}
