#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, multiplies two numbers
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 *
 * Return: 0 on success, 1 if incorrect number of arguments is provided
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if exactly two arguments are provided */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert arguments to integers and multiply them */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	/* Print the result followed by a new line */
	printf("%d\n", result);

	return (0);
}
