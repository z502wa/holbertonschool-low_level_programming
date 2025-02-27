#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer with hexadecimal and character representation.
 * @b: Pointer to the buffer.
 * @size: Number of bytes to print.
 *
 * Description:
 * - Prints 10 bytes per line.
 * - Each line starts with the position in hexadecimal (8 chars).
 * - Shows the hexadecimal content, 2 bytes at a time, separated by a space.
 * - Prints printable characters, otherwise prints '.'.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print the position in hexadecimal */
		printf("%08x: ", i);

		/* Print hexadecimal representation */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");
			if (j % 2)
				printf(" ");
		}

		/* Print character representation */
		for (j = 0; j < 10 && i + j < size; j++)
		{
			char c = b[i + j];
			if (c >= 32 && c <= 126)
				printf("%c", c);
			else
				printf(".");
		}

		printf("\n");
	}
}
