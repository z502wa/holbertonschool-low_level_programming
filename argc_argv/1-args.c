#include <stdio.h>

/**
 * main - Entry point, prints the number of arguments passed to the program
 * @argc: The number of command-line arguments
 * @argv: The array of command-line arguments (unused)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1); /* Print the number of arguments excluding the program name */
	return (0);
}
