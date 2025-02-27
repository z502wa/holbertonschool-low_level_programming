#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function first calculates the length of the string,
 * then prints each character from the end to the beginning.
 */
void print_rev(char *s)
{
	int length = 0;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the string in reverse */
	while (length > 0)
	{
		length--;
		putchar(s[length]);
	}

	putchar('\n'); /* Print a newline at the end */
}
