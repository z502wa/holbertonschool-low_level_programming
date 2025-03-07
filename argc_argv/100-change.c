#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, prints the minimum number of coins for change
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments
 *
 * Return: 0 on success, 1 if incorrect number of arguments is provided
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int i;

	/* Check if exactly one argument is provided */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert argument to integer */
	cents = atoi(argv[1]);

	/* If amount is negative, return 0 */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Loop through each coin denomination */
	for (i = 0; i < 5; i++)
	{
		while (cents >= denominations[i])
		{
			cents -= denominations[i];
			coins++;
		}
	}

	/* Print the minimum number of coins */
	printf("%d\n", coins);
	return (0);
}
