#include <stdio.h>

/**
 * main - Entry point, prints the program's name
 * @argc: The number of command-line arguments (unused)
 * @argv: The array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]); /* Print the program's name */
	return (0);
}
