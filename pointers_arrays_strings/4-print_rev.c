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
	int i = 0, n;

	while (s[i] != '\0')
	{
		i++;
	}
	for (n = i - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
