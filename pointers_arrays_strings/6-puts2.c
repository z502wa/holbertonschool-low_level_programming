#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to the input string.
 *
 * Description: This function prints every other character of a string,
 * starting with the first character, followed by a new line.
 */
void puts2(char *str)
{
	int i;

	/* Loop through the string and print every other character */
	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n'); /* Print a newline at the end */
}

