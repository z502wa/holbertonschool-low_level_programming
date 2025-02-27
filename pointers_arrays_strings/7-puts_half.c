#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the input string.
 *
 * Description: If the number of characters is even, it prints
 * the second half. If odd, it prints the last (length + 1) / 2 characters.
 */
void puts_half(char *str)
{
	int length = 0, start, i;

	/* Find the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine the starting index */
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}

	/* Print the second half of the string */
	for (i = start; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n'); /* Print a newline */
}
