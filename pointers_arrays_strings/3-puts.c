#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function iterates through the string
 * and prints each character until it reaches the null terminator '\0'.
 * After printing the entire string, it adds a newline character.
 */
void _puts(char *str)
{
	while (*str) /* Loop through each character */
	{
		putchar(*str); /* Print the current character */
		str++; /* Move to the next character */
	}
	putchar('\n'); /* Print a newline */
}
